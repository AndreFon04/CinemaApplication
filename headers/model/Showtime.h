//
// Created by andre on 10-06-2023.
//

#ifndef CINEMAAPPLICATION_SHOWTIME_H
#define CINEMAAPPLICATION_SHOWTIME_H

#include "Movie.h"
#include "SeatLayout.h"
#include <string>


using namespace std;

class Showtime
{
private:
    string sessionName;
    Movie *movie;
    //datetime startSession;
    int screen;
    int availableSeats;
    SeatLayout seatLayout;

public:
    Showtime(const string& sessionName, Movie *movie, int screen, int availableSeats, const SeatLayout& seatLayout);
    Showtime(const Showtime& obj);
    string getSessionName() const;
    //datetime getStartSession() const;
    Movie* getMovie() const;
    int getScreen() const;
    int getAvailableSeats() const;
    //int getShowtimesMovies() const;
    SeatLayout* getSeatLayout();
    void setSessionName(const string& sessionName);
    void setMovie(Movie *movie);
    void setScreen(int screen);
    void setAvailableSeats(int availableSeats);
    void setSeatLayout(SeatLayout* seatLayout);
};

#endif //CINEMAAPPLICATION_SHOWTIME_H
