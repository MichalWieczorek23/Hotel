#pragma once
#include <iostream>
#include "Client.h"
#include "Room.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Class represents room reservation. It contains class fields of class types like Client, Room.
// It contains class fields: date, isconfirmed, client, room and methods: getters, setters, howManyObjects(), 
// confirmReservation()
class RoomReservation
{
private:
	static unsigned int objectCount;

	string date;
	bool isconfirmed;
	Client client;
	Room room;

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
};