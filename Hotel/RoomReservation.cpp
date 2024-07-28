#include "RoomReservation.h"

unsigned int RoomReservation::objectCount = 0;

// Constructors:
RoomReservation::RoomReservation()
{
	++objectCount;
	this->date = "00-00-0000";
	this->isconfirmed = false;
	//cout << "Stworzylem room reservation!" << endl;
}

// Destructors:
RoomReservation::~RoomReservation()
{
	--objectCount;
	//cout << "Usunalem room reservation!" << endl;
}

// Methods return number of objects of this class
unsigned int RoomReservation::howManyObjects() {
	return objectCount;
}

// Getters:
string RoomReservation::getDate() {
	return this->date;
}

bool RoomReservation::isConfirmed() {
	return this->isconfirmed;
}

Client RoomReservation::getClient() {
	return this->client;
}

Room RoomReservation::getRoom() {
	return this->room;
}

// Setters:
void RoomReservation::setDate(string date) {
	this->date = date;
}

void RoomReservation::setConfirmed(bool confirmation) {
	this->isconfirmed = confirmation;
}

void RoomReservation::setClient(Client client) {
	this->client = client;
}

void RoomReservation::setRoom(Room room) {
	this->room = room;
}