#include "pch.h"
#include "Event.h"

using namespace std;

int Event::getStartYear() {
	return startYear;
}

int Event::getEndYear() {
	return endYear;
}

int Event::getLength() {
	return length;
}

string Event::getName() {
	return name;
}

string Event::getDescription() {
	return description;
}

Event Event::n() {
	return Event(1, 2, 3, "efs");
}

ostream & operator<<(std::ostream & os, Event & event)
{

	if (event.getStartYear() < 0) {
		if (event.Event::getStartYear() != event.Event::getEndYear()) {
			os << event.Event::getName() << " from " << event.Event::getStartYear() * -1 << " BCE to " << event.Event::getEndYear() * -1 << " BCE";
		}
		else {
			os << event.Event::getName() << " in " << event.Event::getStartYear() * -1 << " BCE";
		}
	}
	
	
	return os;
}
