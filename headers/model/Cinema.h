//
// Created by andre on 11-06-2023.
//

#ifndef CINEMAAPPLICATION_CINEMA_H
#define CINEMAAPPLICATION_CINEMA_H

#include <string>
#include "UserContainer.h"
#include "MovieContainer.h"
#include "ShowtimeContainer.h"


using namespace std;

class Cinema
{
private:
    string name;
    UserContainer users;
    MovieContainer movies;
    ShowtimeContainer showtimes;

public:

    Cinema();
    Cinema(const string& name);
    const string& getName() const ;
    void setName(const string &name) ;


    UserContainer & getUserContainer();
    MovieContainer & getMovieContainer();
    ShowtimeContainer & getShowtimeContainer();
};


#endif //CINEMAAPPLICATION_CINEMA_H
