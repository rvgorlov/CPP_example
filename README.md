Репозиторий содержит примеры, которые облегчают мне работу. 

1. <b>Check-input</b> - содержит пример для обеспечения проверки вводимой информации из консоли. К примеру, если нужно ввести размер массива, то вводимые данные должны быть не отрицательными и нормально складываться в unsigned int.
2. <b>thread-barrier</b> - содержит пример работы с многопоточными программами. К примеру, если нужно реализовать отсутствующие в с++11 барьеры. (https://habrahabr.ru/post/246947/) ВНИМАНИЕ: барьер срабатывает один раз. Эта реализация - велосипед. Используйте ( boost::barrier ). 