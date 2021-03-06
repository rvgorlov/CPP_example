#include <iostream>

using namespace std;

class inputUnsInt
{
public:
	inputUnsInt();
	~inputUnsInt();
	
	static int inputUnsIntCheck () {
	unsigned int size = 0;
	std::ios::iostate state;
    do {
		int temp; 
        std::cout << "Введите N" << std::endl;
        std::cin >> temp;
        if (temp >= 0) {
			state = std::cin.rdstate();
			if (state != std::ios::goodbit) {
				std::cout << "Error" << std::endl;
				std::cin.clear(std::ios::goodbit);
				std::cin.ignore(65535, '\n');
			}
		} else {
			std::cout << "Error" << std::endl;
			std::cin.clear(std::ios::goodbit);
			std::cin.ignore(65535, '\n');
		}
		size = temp;
	} while (state != std::ios::goodbit);
    std::cout << "Вы ввели: " << size << endl;
    return (int) size; 
	};	
};

int main(int argc, char **argv)
{
	unsigned int size = inputUnsInt::inputUnsIntCheck();
	
	// Выделяем память под массив 
	// произвольного размера
	int **a = new int*[size];
	for (unsigned int i = 0; i < size; i++) {
		a[i] = new int[size]; 
		for (unsigned int j = 0; j < size; j++) {
			a[i][j] = i + j + 25; 
		} 
	}
	
	// Выводи массив 
	for (unsigned int i = 0; i < size; i++) {
		for (unsigned int j = 0; j < size; j++) {
			cout << a[i][j] << " "; 
		}
		cout << endl; 
	}
	delete[] a; 
	
	return 0;
}

