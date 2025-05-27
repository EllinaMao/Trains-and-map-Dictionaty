#pragma once

#include <iostream>
#include <string>
#include <vector>


/*
* Написать программу «Автоматизированная информационная система ЖД вокзала». Система содержит: сведения об отправлении поездов дальнего следования. Для каждого поезда указываем: номер, время отправления, станцию назначения.
*/

class Train {
public:
	std::string mTrainNumber; // Номер поезда
	std::string mDepartureTime; // Время отправления
	std::string mDestinationStation; // Станция назначения

public:
	Train() :mTrainNumber("Unknown"), mDepartureTime("Unknown"), mDestinationStation("Unknown") {}
	Train(const std::string& num, const std::string& time, const std::string& station) 
		: mTrainNumber(num), mDepartureTime(time), mDestinationStation(station) {
	}

	void setNumber(const std::string& num) { mTrainNumber = num; }
	void setDepartureTime(const std::string& time) { mDepartureTime = time; }
	void setDestinationStation(const std::string& station) { mDestinationStation = station; }

	std::string getTrainNumber() const { return mTrainNumber; }
	std::string getDepartureTime() const { return mDepartureTime; }
	std::string getDestinationStation() const { return mDestinationStation; }

	void out() const {
		std::cout << "Train Number: " << mTrainNumber << "\n"
			<< "Departure Time: " << mDepartureTime << "\n"
			<< "Destination Station: " << mDestinationStation << "\n";
	}

};

