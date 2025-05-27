#include "trainsArr.h"


bool TrainsArr::removeTrain(const std::string& trainNumber)
{
	auto it = std::remove_if(trains.begin(), trains.end(),
		[&](const Train& t) { return t.getTrainNumber() == trainNumber; });

	if (it != trains.end()) {
		trains.erase(it, trains.end());
		return true;
	}
	return false;
}

bool TrainsArr::trainExists(const std::string& trainNumber) const
{
	for (auto it = trains.cbegin(); it != trains.cend(); ++it) {
		if (it->getTrainNumber() == trainNumber) {
			return true;
		}
	}
	return false;
}

void TrainsArr::printAllTrains() const {
	for (auto it = trains.cbegin(); it != trains.cend(); ++it) {
		it->out();
	}
}

void TrainsArr::setTrainInfo(const size_t index, const Train& updatedTrain)
{
	if (index < trains.size()) {
		trains.at(index) = updatedTrain;
	}
	else {
		throw IndexOutOfRange();
	}
}

void TrainsArr::printTrainInfo(const std::string& trainNumber) const
{
	for (auto it = trains.cbegin(); it != trains.cend(); ++it) {
		if (it->getTrainNumber() == trainNumber) {
			it->out();
			return;
		}
	}
	throw TrainNumberNotFound();
}

void TrainsArr::printTrainInfo(const size_t index) const
{
	if (index < trains.size()) {
		trains.at(index).out();
	}
	else {
		throw IndexOutOfRange();
	}
}
