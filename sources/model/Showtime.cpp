    //
// Created by andre on 10-06-2023.
//

#include "Showtime.h"

Showtime::Showtime(const string& sessionName, Movie *movie, int screen, int availableSeats, const SeatLayout& seatLayout)
{
    this->sessionName = sessionName;
    this->movie = movie;
    this->screen = screen;
    this->availableSeats = availableSeats;
    this->seatLayout = seatLayout;
}

Showtime::Showtime(const Showtime& obj)
{
    this->sessionName = obj.sessionName;
    this->movie = obj.movie;
    this->screen = obj.screen;
    this->availableSeats = obj.availableSeats;
    this->seatLayout = obj.seatLayout;
}

Movie* Showtime::getMovie() const
{
    return this->movie;
}

//datetime getStartSession() const {}


string Showtime::getSessionName() const
{
    return this->sessionName;
}

int Showtime::getScreen() const
{
    return this->screen;
}

int Showtime::getAvailableSeats() const
{
    return this->availableSeats;
}


SeatLayout* Showtime::getSeatLayout()
{
    return &this->seatLayout;
}

void Showtime::setMovie(Movie *movie)
{
    this->movie = movie;
}

void Showtime::setSessionName(const string& sessionName)
{
    this->sessionName = sessionName;
}

void Showtime::setScreen(int screen)
{
    this->screen = screen;
}

void Showtime::setAvailableSeats(int availableSeats)
{
    this->availableSeats = availableSeats;
}

void Showtime::setSeatLayout(SeatLayout* seatLayout)
{
    this->seatLayout = *seatLayout;
}
