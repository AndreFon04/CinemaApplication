//
// Created by andre on 12-06-2023.
//

#ifndef CINEMAAPPLICATION_VIEW_H
#define CINEMAAPPLICATION_VIEW_H
#include "Utils.h"
#include "User.h"
#include "UserContainer.h"
#include "Cinema.h"
#include "Movie.h"
#include "Showtime.h"

class View
{

private:

public:
    int WelcomeScreen();
    int MainMenu();
    int MoviesMenu(list<Movie>& movies);
    void printMovies(list<Movie>& movies);
    void printShowtimes(list<Showtime> showtimes);
    int BuyTicketsMenu(list<Movie>& movies);
    int ListSessionsMenu();
    int SpecificsMenu(list<Movie>& movies);
    //int  FindMovie();
    int UpdateUser();

};


#endif //CINEMAAPPLICATION_VIEW_H
