#include "Room.h"

unsigned int Room::objectCount = 0;

Room::Room()
{
	++objectCount;
	this->id = objectCount;
	this->description = "empty";;
	this->area = 0.0;
	this->floor = 0;
	this->haskingsizebed = false;
	//cout << "Stworzylem room!" << endl;
}

Room::~Room()
{
	--objectCount;
	//cout << "Usunalem room!" << endl;
}

unsigned int Room::howManyObjects() {
	return objectCount;
}


string Room::getDescription() {
	return this->description;
}

double Room::getArea() {
	return this->area;
}

int Room::getFloor() {
	return this->floor;
}

bool Room::hasKingSizeBed() {
	return this->haskingsizebed;
}

void Room::setDescription(string desc) {
	this->description = desc;
}

void Room::setArea(double ar) {
	this->area = ar;
}

void Room::setFloor(int fl) {
	this->floor = fl;
}

void Room::setHasKingSizeBed(bool haskingbed) {
	this->haskingsizebed = haskingbed;
}