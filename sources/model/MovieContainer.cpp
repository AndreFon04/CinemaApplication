//
// Created by andre on 11-06-2023.
//

#include "MovieContainer.h"
#include <string>

using namespace std;

list<Movie>::iterator MovieContainer::search(const string& title)
{
    list<Movie>::iterator it = this->movies.begin();
    return it;
}

list<Movie> MovieContainer::getAll()
{
    list<Movie> newlist (this->movies);
    return newlist;
}

Movie* MovieContainer::get(const string& title)
{
    return NULL;
}

void MovieContainer::add(const Movie& obj)
{
    return;
}

void MovieContainer::remove(const string& title)
{
    return;
}

//void update(const string& title, const string& description){}
