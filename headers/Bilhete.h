//
// Created by andre on 05-06-2023.
//

#ifndef CINEMAAPPLICATION_BILHETE_H
#define CINEMAAPPLICATION_BILHETE_H

#include <iostream>
#include <string>

using namespace std;

class Bilhete
{
public:
    static bool Continue();
    static const char* SelectedMovie();
    static int Movie();
    static double Price(int numPeople);
    int Room();
    string SessionTime();
    static string TicketTime();
    int Date();
    int Row();
    int Seat();
    string Ticket();
};

#endif //CINEMAAPPLICATION_BILHETE_H
