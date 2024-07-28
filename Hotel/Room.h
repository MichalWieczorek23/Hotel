#pragma once
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Class represent hotel room. It contains class fields: id, description, area, floor and haskingsizebed
// and methods: getters, setters, howManyObjects.
class Room
{
public:
	Room();
	~Room();

	unsigned int howManyObjects();

	string getDescription();
	double getArea();
	int getFloor();
	bool hasKingSizeBed();

	void setDescription(string desc);
	void setArea(double ar);
	void setFloor(int fl);
	void setHasKingSizeBed(bool haskingbed);

private:
	static unsigned int objectCount;

	string id;
	string description;
	double area;
	int floor;
	bool haskingsizebed;
};