//
// Created by andre on 15-06-2023.
//

#ifndef CINEMAAPPLICATION_SEATLAYOUT_H
#define CINEMAAPPLICATION_SEATLAYOUT_H


#include <iostream>
#include <vector>
#include "Seat.h"

using namespace std;

class SeatLayout
{
private:
    vector<vector<Seat>> layout;
public:
    SeatLayout();
    SeatLayout(int numRows, int numCols);
//  SeatLayout(int numRows, int numCols, list<string> unavailable);
    SeatLayout(const SeatLayout& obj);
    SeatLayout& operator=(const SeatLayout& obj);
    Seat* getSeat(int row, int column);
    void setOccupied(int row, int column, bool occupied);
    void setUnavailable(int row, int column, bool unavailable);
    int getCapacity();
    int getAvailableSeats();
    int getNumberOfRows();
    int getNumberOfColumns(int row);
    bool getSeatRowColIsValid(int& row, int& column, string& s);
};
























#endif //CINEMAAPPLICATION_SEATLAYOUT_H
