#pragma once
#include <vector>
#include "Client.h"
#include "Room.h"
#include "RoomReservation.h"
#include "PremiumClient.h"

// Class represents hotel class. It contains list of clients, rooms and reservations stored as vectors.
class Hotel
{
private:
	std::vector <Client> clientsList;
	std::vector <Room> roomsList;
	std::vector <RoomReservation> roomReservationList;

};