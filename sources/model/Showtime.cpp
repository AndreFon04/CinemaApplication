    //
// Created by andre on 10-06-2023.
//

#include "model/Showtime.h"

Showtime::Showtime(const Movie& movie, const string& sessionName, int room, int availableSeats)
{
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

