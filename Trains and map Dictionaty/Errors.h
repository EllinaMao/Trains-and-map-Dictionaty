#pragma once
#include <string>
#include <iostream>
#include <stdexcept>
#include "trainsArr.h"


class Error : public std::runtime_error {
	public:
		using std::runtime_error::runtime_error;
};

struct EmptyTrainList : public Error {
	EmptyTrainList() : Error("Train list is empty") {};
	using Error::Error;
};
	
struct EmptyStationList : public Error {
	EmptyStationList() : Error("Station list is empty") {};
	using Error::Error;
};

struct TrainNumberNotFound : public  std::out_of_range {
	using std::out_of_range::out_of_range;
	TrainNumberNotFound() : std::out_of_range("Train with this number not found") {};
};

struct IndexOutOfRange : public  std::out_of_range {
	using std::out_of_range::out_of_range;
	IndexOutOfRange() : std::out_of_range("Train index out of range") {};
};

struct FileNotFound : public Error {
	using Error::Error;
	FileNotFound() : Error("File not found") {};
};

struct WordNotFound : public Error {
	using Error::Error;
	WordNotFound() : Error("Word not found in the dictionary") {};
};

struct FileCantOpen : public Error {
	using Error::Error;
	FileCantOpen() : Error("Can`t open file") {};
};
