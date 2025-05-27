#pragma once
#include <string>
#include <vector>
#include "train.h"
#include "Errors.h"
#include <iterator>
/*
Обеспечить:

Ввод данных в систему.
Вывод информации о всех поездах.
Вывод информации о запрашиваемом поезде.
Использовать контейнерный класс vector.
*/
class TrainsArr {
private:
	std::vector<Train> trains;

public:
	TrainsArr() = default;

	void addTrain(const Train& train) { trains.push_back(train); } //Ввод данных в систему.

	const std::vector<Train>& getTrains() const { return trains; }
	bool trainExists(const std::string& trainNumber) const;

	void printAllTrains() const; // Вывод информации о всех поездах.

	void setTrainInfo(const size_t index, const Train& updatedTrain); //Ввод данных в систему.

	void printTrainInfo(const std::string& trainNumber) const; // Вывод информации о запрашиваемом поезде.
	void printTrainInfo(const size_t index) const; // Вывод информации о поезде по индексу.
};