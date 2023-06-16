//
// Created by andre on 10-06-2023.
//

#include "Booking.h"

int Booking::NUMBER = 0;

Booking::Booking(User *user, Showtime *showtime, list<Seat*> seats)
{
    this->id = ++NUMBER;
    this->user = user;
    this->showtime = showtime;
    this->seats = seats;

}

Booking::Booking(const Booking& obj)
{
    this->id = obj.id;
    this->user = obj.user;
    this->showtime = obj.showtime;
    this->seats = obj.seats;
}

int Booking::getId() const
{
    return id;
}


User* Booking::getUser() const
{
    return user;
}

Showtime* Booking::getShowtime() const
{
    return showtime;
}

list<Seat*> Booking::getSeats()
{
    return seats;
}

