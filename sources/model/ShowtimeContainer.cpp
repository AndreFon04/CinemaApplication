//
// Created by andre on 11-06-2023.
//

#include "model/ShowtimeContainer.h"
#include <string>

using namespace std;

list<Showtime>::iterator ShowtimeContainer::search(const string& name)
{
    list<Showtime>::iterator it = this->showtimes.begin();
    return it;
}

list<Showtime> ShowtimeContainer::getAll()
{
    list<Showtime> newlist (this->showtimes);
    return newlist;
}

Showtime* ShowtimeContainer::get(const string& name)
{
    return NULL;
}

void ShowtimeContainer::add(const Showtime& obj)
{
    return;
}

void ShowtimeContainer::remove(const string& name)
{
    return;
}

/*void ShowtimeContainer::update(const string& username, const string& email)
{
    return;
}*/
