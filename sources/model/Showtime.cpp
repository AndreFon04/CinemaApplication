    //
// Created by andre on 10-06-2023.
//

#include "Showtime.h"

Showtime::Showtime(Movie *movie, const string& sessionName, int room, int availableSeats)
{
    this->movie = (Movie *) movie;
    this->sessionName = sessionName;
    this->room = room;
    this->availableSeats = availableSeats;
    return;
}

Movie* Showtime::getMovie()
{
    return this->movie;
}

//datetime getStartSession(){}


string Showtime::getSessionName()
{
    return this->sessionName;
}

int Showtime::getAvailableSeats()
{
    return this->availableSeats;
}

