#pragma once
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Class represents client. It contains class fields: id, firstName, lastName, birthDate, email, isSmoking,
// phoneNumber and methods: getters, setters, howManyObjects()
class Client
{
public:
	Client();
	~Client();

	unsigned int howManyObjects();

	string getFirstName();
	string getLastName();
	string getBirthDate();
	string getEmail();
	bool isSmoking();
	string getPhoneNumber();

	void setFirstName(string name);
	void setLastName(string name);
	void setBirthDate(string date);
	void setEmail(string mail);
	void setSmoking(bool smoking);
	void setPhoneNumber(string number);

private:
	static unsigned int objectCount;

	string id;
	string firstName;
	string lastName;
	string birthDate;
	string email;
	bool iSmoking;
	string phoneNumber;
};
