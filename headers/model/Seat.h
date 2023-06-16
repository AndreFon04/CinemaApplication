//
// Created by andre on 10-06-2023.
//

#ifndef CINEMAAPPLICATION_SEAT_H
#define CINEMAAPPLICATION_SEAT_H

#include <iostream>
#include <string>


using namespace std;


class Seat {

private:
    int row;
    int column;
    bool occupied;
    bool unavailable;
    bool selected;

public:
    Seat();
    Seat(int row, int column, bool occupied, bool unavailable);
    Seat(const Seat& obj);
    int getRow() const;
    int getColumn() const;
    bool isOccupied() const;
    bool isUnavailable() const;
    bool isSelected() const;
    string getRowColumn();
    void setRow(int row);
    void setColumn(int column);
    void setOccupied(bool occupied);
    void setUnavailable(bool unavailable);
    void setSelected(bool selected);
    void setRowColumn(const string& rowColumn);
};

#endif //CINEMAAPPLICATION_SEAT_H
