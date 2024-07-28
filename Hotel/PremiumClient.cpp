#include "PremiumClient.h"

// Constructors:
PremiumClient::PremiumClient() {
	Client::Client();
	this->premiumAccountType = true;
}

// Destructors:
PremiumClient::~PremiumClient() {
	Client::~Client();
}

// Getters:
string PremiumClient::getFullName() {
	return ("premium." + this->getFirstName() + " " + this->getLastName());
}

bool PremiumClient::getAccountType() {
	return this->premiumAccountType;
}

// Setters:
void PremiumClient::setAccountType(bool isPremium) {
	this->premiumAccountType = isPremium;
}