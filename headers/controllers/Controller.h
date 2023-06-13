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
    void runCinema();
public:
    Controller(Cinema& cinema);
    void run();
};



#endif //CINEMAAPPLICATION_CONTROLLER_H
