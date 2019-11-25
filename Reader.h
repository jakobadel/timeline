#ifndef READER_H
#define READER_H

#include "pch.h"
#include "Event.h"

#include <fstream>
#include <string>

using namespace std;

Event readEvent(ifstream &is, string filename, int lineNum);

#endif
