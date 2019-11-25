#include "pch.h"
#include "Timeline.h"

#include <iostream>


int Timeline::getLength() {
	return length;
}

void Timeline::printTimeline() {
	for (int i = 0; i < getLength(); i++) {
		if (i != length - 1) {
			if (events[i].getStartYear() && events[i + 1].getStartYear()) {
				cout << "| " << events[i].getStartYear() << "     " << events[i] << " and " << events[i + 1] << endl;
				
			}
		}
		else {
			cout << "| " << events[i].getStartYear() << "     " << events[i] << endl;
		}
		
		if (i == length - 1) {
			break;
		}

		int q = -1 * (events[i].getStartYear() - events[i + 1].getStartYear()) / 10;
		for (int j = 0; j < q; j++) {

			cout << "| " << endl;
		}
	}
}

void Timeline::timelineInit(int numEvents, string filename) {
	ifstream in;
	for (int i = 0; i < numEvents; i++) {
		events.push_back(readEvent(in, filename, i));
		length++;
	}
}
