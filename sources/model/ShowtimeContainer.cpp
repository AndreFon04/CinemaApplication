//
// Created by andre on 11-06-2023.
//

#include "DuplicatedDataException.h"
#include "ShowtimeContainer.h"
#include <string>

using namespace std;

list<Showtime>::iterator ShowtimeContainer::search(const string& name)
{
    list<Showtime>::iterator it = this->showtimes.begin();
    for (; it != this->showtimes.end(); ++it){
        if(it->getSessionName() == name){
            return it;
        }
    }
    return it;
}

list<Showtime> ShowtimeContainer::getAll()
{
    list<Showtime> newlist (this->showtimes);
    return newlist;
}

list<Showtime> ShowtimeContainer::getShowtimesMovie(Movie* movie)
{

}

Showtime* ShowtimeContainer::get(const string& name)
{
    list<Showtime>::iterator it = search(name);
    if(it != this->showtimes.end()){
        return &(*it);
    }
}

void ShowtimeContainer::add(const Showtime& obj)
{
    list<Showtime>::iterator it = search(obj.getSessionName());
    if(it == this->showtimes.end()){
        this->showtimes.push_back(obj);
    }else {
        string msg = "Showtime: " + obj.getSessionName();
        throw DuplicatedDataException(msg);
    }
}

void ShowtimeContainer::remove(const string& name)
{
    list<Showtime>::iterator it = search(name);
    if(it != this->showtimes.end()){
        this->showtimes.erase(it);
    }
}

void ShowtimeContainer::update(const string& sessionName, Movie *movie, int screen, int availableSeats)
{
    list<Showtime>::iterator it = search(sessionName);
    if(it != this->showtimes.end()){
        it->setMovie(movie);
        it->setScreen(screen);
        it->setAvailableSeats(availableSeats);
    }
}
