//
// Created by andre on 10-06-2023.
//

#ifndef CINEMAAPPLICATION_CONTROLLER_H
#define CINEMAAPPLICATION_CONTROLLER_H

#include "Cinema.h"
#include "View.h"
#include "View.h"


class Controller{

private:
    Cinema model;
    View view;
    void runLogin();
    void runMainMenu();
    void runMoviesMenu();
    void runBuyTicketsMenu();
    void runListSessionsMenu(Movie* movie);
    void runSpecificsMenu();
    void runSeatSelectionMenu(SeatLayout *layout);
    void runBookingMenu(list<Seat *> seats);
    //void runFindMovie();
    void runUpdateUser();
public:
    Controller(Cinema& cinema);
    void run();


};



#endif //CINEMAAPPLICATION_CONTROLLER_H
