//
// Created by andre on 14-06-2023.
//
#include "BookingContainer.h"
#include "DuplicatedDataException.h"

using namespace std;

list<Booking>::iterator BookingContainer::search(int id)
{
    list<Booking>::iterator it = this->bookings.begin();
    for (; it != this->bookings.end(); ++it){
        if(it->getId() == id){
            return it;
        }
    }
    return it;
}

list<Booking> BookingContainer::getAll()
{
    list<Booking> newlist (this->bookings);
    return newlist;
}

Booking* BookingContainer::get(int id)
{
    list<Booking>::iterator it = search(id);
    if(it != this->bookings.end()){
        return &(*it);
    }
    return NULL;

}

void BookingContainer::add(const Booking& obj)
{
    list<Booking>::iterator it = search(obj.getId());
    if(it == this->bookings.end()){
        this->bookings.push_back(obj);
    }else {
        string msg = "Booking: " + to_string(obj.getId());
        throw DuplicatedDataException(msg);
    }
}

void BookingContainer::remove(int id)
{
    list<Booking>::iterator it = search(id);
    if(it != this->bookings.end()){
        this->bookings.erase(it);
    }
}
