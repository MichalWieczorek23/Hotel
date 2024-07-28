#include <iostream>
#include "RoomReservation.h"
#include "Room.h"
#include "Client.h"
#include "PremiumClient.h"

int main()
{
    Client c1;
    Client c2;
    std::cout << "Number of clients: " << c1.howManyObjects() << endl;
    std::cout << "Number of clients: " << c2.howManyObjects() << endl;

    Room r1;
    std::cout << "Number of rooms: " << r1.howManyObjects() << endl;

    RoomReservation rr1;
    std::cout << "Number of room reservations: " << rr1.howManyObjects() << endl;

    cout << "Client data: firstname->" << c1.getFirstName() << ", lastname->"
        << c1.getLastName() << ", birthdate->" << c1.getBirthDate() << ", email->" << c1.getEmail() <<
        ", isSmoking->" << c1.isSmoking() << ", phone->" << c1.getPhoneNumber() << endl;

    c1.setFirstName("Michal");
    c1.setLastName("Bulwa");
    c1.setBirthDate("23-03-2023");
    c1.setEmail("michal@mail.com");
    c1.setSmoking(true);
    c1.setPhoneNumber("123456789");

    cout << "Client data after update: firstname->" << c1.getFirstName() << ", lastname->"
        << c1.getLastName() << ", birthdate->" << c1.getBirthDate() << ", email->" << c1.getEmail() <<
        ", isSmoking->" << c1.isSmoking() << ", phone->" << c1.getPhoneNumber() << endl;

    cout << "Room data: description->" << r1.getDescription() << ", area->"
        << r1.getArea() << ", floor->" << r1.getFloor() << ", haskingsizebed->" << r1.hasKingSizeBed() << endl;

    cout << "Room reservation data: date->" << rr1.getDate() << ", isConfirmed->"
        << rr1.isConfirmed() << ", client->" << rr1.getClient().getFirstName() << ", room->" << rr1.getRoom().getDescription() << endl;

    PremiumClient pc1;
    std::cout << "Number of clients: " << c1.howManyObjects() << endl;
    pc1.setFirstName("Szymon");
    pc1.setLastName("Bulwa");
    pc1.setBirthDate("29-03-2023");
    pc1.setEmail("szymon@mail.com");
    pc1.setSmoking(true);
    pc1.setPhoneNumber("123456789");

    cout << "Client data after update: firstname->" << pc1.getFirstName() << ", lastname->"
        << pc1.getLastName() << ", birthdate->" << pc1.getBirthDate() << ", email->" << pc1.getEmail() <<
        ", isSmoking->" << pc1.isSmoking() << ", phone->" << pc1.getPhoneNumber() << "accouttype->" << 
        pc1.getAccountType() << endl;

    cout << pc1.getFullName() << endl;
}