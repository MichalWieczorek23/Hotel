#pragma once
#include <iostream>
#include "Client.h"
#include "Room.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

class RoomReservation
{
public:
	RoomReservation();
	~RoomReservation();

	unsigned int howManyObjects();
	void confirmReservation();
	
	string getDate();
	bool isConfirmed();
	Client getClient();
	Room getRoom();

	void setDate(string date);
	void setConfirmed(bool confirmation);
	void setClient(Client client);
	void setRoom(Room room);

private:
	static unsigned int objectCount;

	string date;
	bool isconfirmed;
	Client client;
	Room room;
};