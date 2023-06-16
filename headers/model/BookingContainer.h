//
// Created by andre on 14-06-2023.
//

#ifndef CINEMAAPPLICATION_BOOKINGCONTAINER_H
#define CINEMAAPPLICATION_BOOKINGCONTAINER_H

#include <list>
#include "Booking.h"

using namespace std;

class BookingContainer{
private:
    list<Booking> bookings;
    list<Booking>::iterator search(int id);

public:
    list<Booking> getAll();
    Booking* get(int id);
    void add(const Booking& obj);
    void remove(int id);

};


#endif //CINEMAAPPLICATION_BOOKINGCONTAINER_H
