#include "pch.h"
#include <fstream>
#include <iostream>
#include <string>
#include "Reader.h"




using namespace std;

Event readEvent(ifstream &is, string filename, int lineNum) {

	string line;
	int ticker = 0;
	string startYearIn;
	string endYearIn;
	int lengthIn = 0;
	string nameIn;
	string descriptionIn;
	is.open(filename);
	if (!is.is_open()) {
		cout << "failed to open file";
	}

	for (int i = 0; i < lineNum + 1; i++) {
		getline(is, line);
	}


	int lineLength = line.length();
	char input = line[ticker];
	while (1){
		input = line[ticker];
		if (input != '\t') {
			startYearIn += int(input);
			ticker++;
		}
		
		else {
			ticker++;
			break;
		}
	}
	while (1) {
		input = line[ticker];
		if (input != '\t') {
			endYearIn += input;	
			ticker++;
		}
		else {
			ticker++;
			break;
		}
	}
	while (1) {
		input = line[ticker];
		if (input != '\t') {
			nameIn += input;
			ticker++;
		}
		else {
			ticker++;
			break;
		}
	}
	while (ticker < lineLength){
		input = line[ticker];
		if (input != '\t') {
			descriptionIn += input;
			ticker++;
		}
		else {
			ticker++;
			break;
		}
	}
	is.close();
	lengthIn = stoi(endYearIn) - stoi(startYearIn);
	if (descriptionIn.length() > 1) {
		Event newEvent(stoi(startYearIn), stoi(endYearIn), lengthIn, nameIn, descriptionIn);
		return newEvent;
	}
	else {
		Event newEvent(stoi(startYearIn), stoi(endYearIn), lengthIn, nameIn);
		return newEvent;
	}
}