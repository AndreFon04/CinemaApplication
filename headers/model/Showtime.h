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
    Movie* movie;
    //datetime startSession;
    string sessionName;
    int room;
    int availableSeats;

public:
    Showtime(const Movie& movie, const string& sessionName, int room, int availableSeats);
    Movie* getMovie();
    //datetime getStartSession();
    string getSessionName();
    int getAvailableSeats();
};

#endif //CINEMAAPPLICATION_SHOWTIME_H
