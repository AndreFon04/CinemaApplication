    //
// Created by andre on 10-06-2023.
//

#include "Showtime.h"

Showtime::Showtime(Movie *movie, const string& sessionName, int screen, int availableSeats)
{
    this->movie = (Movie *) movie;
    this->sessionName = sessionName;
    this->screen = screen;
    this->availableSeats = availableSeats;
    return;
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


int Showtime::getShowtimesMovies() const
{
    return this->showtimeMovies;
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