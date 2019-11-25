#ifndef EVENT_H
#define EVENT_H

//#include "pch.h"

#include <string>

using namespace std;

class Event {
private:
	int startYear;
	int endYear;
	int length;
	string name;
	string description;

public:

	Event(int startYearIn, int endYearIn, int lengthIn, string nameIn)
		: startYear(startYearIn), endYear(endYearIn), length(lengthIn), name(nameIn) {}

	Event(int startYearIn, int endYearIn, int lengthIn, string nameIn, string descriptionIn)
		: Event(startYearIn, endYearIn, lengthIn, nameIn) {
		description = descriptionIn;
	}

	int getStartYear();

	int getEndYear();

	int getLength();

	string getName();

	string getDescription();

	Event n();
};

ostream & operator<<(std::ostream & os, Event & event);

#endif