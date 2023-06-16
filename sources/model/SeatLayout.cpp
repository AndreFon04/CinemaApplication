//
// Created by andre on 15-06-2023.
//

#include "SeatLayout.h"


SeatLayout::SeatLayout()
{
}

SeatLayout::SeatLayout(int numRows, int numCols)
{
    vector<Seat> row (numCols);
    for (int i = 0; i < numRows; i++){
        for (int j = 0; j < numCols; j++){
            row[j].setRow(i);
            row[j].setColumn(j);
        }
        this->layout.push_back(row);
    }
}

//  SeatLayout::SeatLayout(int numRows, int numCols, list<string> unavailable){}

SeatLayout::SeatLayout(const SeatLayout& obj)
{
    this->layout = obj.layout;
}

SeatLayout& SeatLayout::operator=(const SeatLayout& obj)
{
    this->layout = obj.layout;
    return *this;
}

Seat* SeatLayout::getSeat(int row, int column)
{
    return &this->layout[row][column];
}

void SeatLayout::setOccupied(int row, int column, bool occupied)
{
    this->layout[row][column].setOccupied(occupied);
}

void SeatLayout::setUnavailable(int row, int column, bool unavailable)
{
    this->layout[row][column].setUnavailable(unavailable);
}

int SeatLayout::getCapacity()
{
    int count = 0;
    for (int i = 0; i < layout.size(); i++){
        for (int j = 0; j < layout[i].size(); j++){
            if (!layout[i][j].isUnavailable()) {
                count++;
            }
        }
    }
    return count;
}

int SeatLayout::getAvailableSeats()
{
    int count = 0;
    for (int i = 0; i < this->layout.size(); i++){
        for (int j = 0; j < this->layout[i].size(); j++){
            if (!this->layout[i][j].isOccupied()) {
                count++;
            }
        }
    }
    return count;
}

int SeatLayout::getNumberOfRows()
{
    return this->layout.size();
}

int SeatLayout::getNumberOfColumns(int row)
{
    return this->layout[row].size();
}

bool SeatLayout::getSeatRowColIsValid(int& row, int& column, string& s)
{
    if ((s.size() != 2) && (s.size() != 3)) {
        return false;
    }
    if ((s[0] < 'A') || (s[0] > 'Z')) {
        return false;
    }
    if ((s[1] < '0') || (s[1] > '9')) {
        return false;
    }
    if (s.size() == 3) { if ((s[2] < '0') || (s[2] > '9')) {
        return false;
    }}
    int r = s[0] -'A';
    s[0] = '0';
    int c = stoi(s) - 1 ;
    if (r > this->layout.size()) {
        return false;
    }
    if (c > this->layout[r].size()) {
        return false;
    }
    row = r;
    column = c;
    return true;
}