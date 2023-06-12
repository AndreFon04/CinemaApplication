//
// Created by andre on 10-06-2023.
//

#ifndef CINEMAAPPLICATION_CONTROLLER_H
#define CINEMAAPPLICATION_CONTROLLER_H

#include "model/Cinema.h"
#include "views/View.h"



class Controller{

private:
    Cinema model;
    View view;
    //void runLogin();
    //void runInstructors();
public:
    Controller(Cinema& cinema);
    void run();
};



#endif //CINEMAAPPLICATION_CONTROLLER_H
