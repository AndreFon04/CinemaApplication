//
// Created by andre on 10-06-2023.
//

#ifndef CINEMAAPPLICATION_SHOWTIME_H
#define CINEMAAPPLICATION_SHOWTIME_H

#include "Movie.h"
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

public:
    Showtime(Movie *movie, const string& sessionName, int screen, int availableSeats);
    string getSessionName() const;
    //datetime getStartSession() const;
    Movie* getMovie() const;
    int getScreen() const;
    int getAvailableSeats() const;
    void setSessionName(const string& sessionName);
    void setMovie(Movie *movie);
    void setScreen(int screen);
    void setAvailableSeats(int availableSeats);
};

#endif //CINEMAAPPLICATION_SHOWTIME_H
