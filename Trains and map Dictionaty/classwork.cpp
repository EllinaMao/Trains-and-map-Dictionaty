#include <iostream>
#include <vector>
#include "train.h"
#include "trainsArr.h"
using namespace std;

/*
Задание 1
Написать программу «Автоматизированная информационная система ЖД вокзала». Система содержит: сведения об отправлении поездов дальнего следования. Для каждого поезда указываем: номер, время отправления, станцию назначения.

Обеспечить:

Ввод данных в систему.
Вывод информации о всех поездах.
Вывод информации о запрашиваемом поезде.
Использовать контейнерный класс vector.

........................................................................
Задание 2
Используя контейнер map реализовать программу — словарь.
Основные возможности:

поиск слова;
добавление, удаление, редактирование слов;
чтение и запись словаря в файл.


*/

int main()
{

try {

    TrainsArr trainsArr; 
	cout << "One train: " << endl;
	trainsArr.addTrain(Train("123", "10:00", "New York"));
	trainsArr.printTrainInfo("123");
	trainsArr.addTrain(Train("001", "10:00", "New York"));
	trainsArr.addTrain(Train("002", "10:00", "New York"));
	cout << "All trains: " << endl;
	trainsArr.printAllTrains();

}

catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
}
catch (...) {
    std::cerr << "An unexpected error occurred." << std::endl;
}
    return 0;  

}

