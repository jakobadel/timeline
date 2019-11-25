#ifndef TIMELINE_H
#define TIMELINE_H

#include "pch.h"
#include "Event.h"
#include "Reader.h"

#include <istream>
#include <string>
#include <vector>

using namespace std;

const int MAX_LENGTH = 200;

class Timeline {
private:

	int length;

public:

	Timeline(vector<Event> e)
		: length(0), events(e) {}

	vector<Event> events;

	int getLength();

	void printTimeline();

	void timelineInit(int numEvents, string filename);

};

#endif
