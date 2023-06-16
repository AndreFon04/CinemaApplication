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
#include "SeatLayout.h"
#include "Seat.h"

class View
{

private:

public:
    int WelcomeScreen();
    int MainMenu();
    int MoviesMenu(list<Movie>& movies);
    int BuyTicketsMenu(list<Movie>& movies);
    int ListSessionsMenu(list<Showtime> showtimes);
    int SpecificsMenu(list<Movie>& movies);
    string SeatSelectionMenu(SeatLayout* layout);
    string BookingMenu(list<Seat*> seats);
    //int  FindMovie();
    int UpdateUser();
    void printMovies(list<Movie>& movies);
    void printShowtimes(list<Showtime> showtimes);
    void printMovieSpecifics(list<Movie>& movies, int index);
    void printSeatLayout(SeatLayout* seatLayout);

};


#endif //CINEMAAPPLICATION_VIEW_H
