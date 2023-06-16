//
// Created by andre on 10-06-2023.
//



#include "Seat.h"

Seat::Seat()
{
    this->row = 0;
    this->column = 0;
    this->occupied = false;
    this->unavailable = false;
    this->selected = false;

}

Seat::Seat(int row, int column, bool occupied, bool unavailable)
{
    this->row = row;
    this->column = column;
    this->occupied = occupied;
    this->unavailable = unavailable;
    this->selected = false;
}

Seat::Seat(const Seat& obj)
{
    this->row = obj.row;
    this->column = obj.column;
    this->occupied = obj.occupied;
    this->unavailable = obj.unavailable;
    this->selected = obj.selected;
}

int Seat::getRow() const
{
    return row;
}

int Seat::getColumn() const
{
    return column;

}

bool Seat::isOccupied() const
{
    return occupied;

}

bool Seat::isUnavailable() const
{
    return unavailable;

}

bool Seat::isSelected() const
{
    return selected;
}

string Seat::getRowColumn()
{
    string s;
    s.push_back('A' + this->row);
    s = s + to_string(this->column + 1);
    return s;
}

void Seat::setRow(int row)
{
    this->row = row;
}

void Seat::setColumn(int column)
{
    this->column = column;
}

void Seat::setOccupied(bool occupied)
{
    this->occupied = occupied;
}

void Seat::setUnavailable(bool unavailable)
{
    this->unavailable = unavailable;
}

void Seat::setSelected(bool selected)
{
    this->selected = selected;
}

void Seat::setRowColumn(const string& rowColumn)
{
    string s = rowColumn;
    this->row = s[0] -'A';
    s[0] = '0';
    this->column = stoi(s);
}
