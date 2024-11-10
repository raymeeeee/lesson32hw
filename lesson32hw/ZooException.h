#pragma once
#include <iostream>
#include <string>
using namespace std;

class ZooException
{
public:
	virtual string showMessage()const = 0;
};

class PredatorException : public ZooException
{
	string text;
	string name;
public:
	PredatorException(string text, string name) { this->text = text; this->name = name; };
	string showMessage()const {
		return text + ". Predator: " + name + ".";
	};
};

class MaxCapacityException : public ZooException
{
	string text;
	int maxSize;
public:
	MaxCapacityException(string text, int maxSize) { this->text = text; this->maxSize = maxSize; };
	string showMessage()const {
		return text + ". Max size: " + to_string(maxSize) + ".";
	};
};

