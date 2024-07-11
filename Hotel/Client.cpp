#include "Client.h"

unsigned int Client::objectCount = 0;

Client::Client()
{
	++objectCount;
	this->id = this->objectCount;
	this->firstName = "empty";
	this->lastName = "empty";
	this->birthDate = "00-00-0000";
	this->email = "null@null";
	this->iSmoking = false;
	this->phoneNumber = "000000000";

	//cout << "Simple Client made" << endl;
}

Client::~Client()
{
	--objectCount;
	//cout << "Simple Client erase!" << endl;
}

unsigned int Client::howManyObjects() {
	return objectCount;
}

string Client::getFirstName() {
	return this->firstName;
}

string Client::getLastName() {
	return this->lastName;
}

string Client::getBirthDate() {
	return this->birthDate;
}

string Client::getEmail() {
	return this->email;
}

bool Client::isSmoking() {
	return this->iSmoking;
}

string Client::getPhoneNumber() {
	return this->phoneNumber;
}

void Client::setFirstName(string name) {
	this->firstName = name;
}

void Client::setLastName(string name) {
	this->lastName = name;
}

void Client::setBirthDate(string date) {
	this->birthDate = date;
}

void Client::setEmail(string mail) {
	this->email = mail;
}

void Client::setSmoking(bool smoking) {
	this->iSmoking = smoking;
}

void Client::setPhoneNumber(string number) {
	this->phoneNumber = number;
}