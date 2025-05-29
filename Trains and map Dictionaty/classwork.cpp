#include <iostream>
#include <vector>
#include "train.h"
#include "trainsArr.h"

#include <map>
#include <string>
#include "Dictiotary.h"
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


	Dictionary dict;
	Dictionary dict2;
	dict.addWord("banana", "A long curved fruit that grows in clusters and has soft pulpy flesh and yellow skin when ripe.");
	dict.addWord("cherry", "A small, round stone fruit that is typically red or black when ripe.");
	dict.addWord("apple", "A fruit that is typically red, green, or yellow and is sweet and crisp.");
	cout << "Dictionary contents:" << endl;
	dict.printAllWords();
	cout << "\nSearching for 'banana':" << endl;
	dict.searchWord("banana");
	cout << "\nEditing 'apple':" << endl;
	dict.editWord("apple", "A sweet fruit that can be red, green, or yellow.");
	cout << "\nAfter editing 'apple':" << endl;
	dict.printAllWords();
	cout << "\nRemoving 'cherry':" << endl;
	dict.removeWord("cherry");

	cout << "\nSaving and loading dictionary from file:" << endl;
	dict.saveToFile("dictionary.json");
	dict2.loadFromFile("dictionary.json");
	cout << "\nLoaded dictionary from file:" << endl;
	dict2.printAllWords();
}

catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
}
catch (...) {
    std::cerr << "An unexpected error occurred." << std::endl;
}
    return 0;  

}

