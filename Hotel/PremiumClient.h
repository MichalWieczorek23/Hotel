#pragma once
#include "Client.h"

// Class represents premium client. It inherits after Client class. Beyond fields and methods same as in parent class
// it also contain fields: premiumAccountType and methods: getters, setters, getFullName()
class PremiumClient : public Client
{
public:
	PremiumClient();
	~PremiumClient();

	string getFullName();
	bool getAccountType();
	void setAccountType(bool);

private:
	bool premiumAccountType;
};