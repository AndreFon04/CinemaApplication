//
// Created by andre on 10-06-2023.
//

#ifndef CINEMAAPPLICATION_BOOKING_H
#define CINEMAAPPLICATION_BOOKING_H

#include <iostream>
#include <list>
#include "User.h"
#include "Showtime.h"
#include "Seat.h"

using namespace std;

class Booking {

private:
    static int NUMBER;
    int id;
    User *user;
    Showtime *showtime;
    list<Seat*> seats;

public:
    Booking(User *user, Showtime *showtime, list<Seat*> seats);
    Booking(const Booking& obj);
    int getId() const;
    User* getUser() const;
    Showtime* getShowtime() const;
    list<Seat*> getSeats();

};


#endif //CINEMAAPPLICATION_BOOKING_H
