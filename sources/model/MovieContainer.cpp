//
// Created by andre on 11-06-2023.
//

#include "MovieContainer.h"
#include "DuplicatedDataException.h"
#include <string>

using namespace std;

list<Movie>::iterator MovieContainer::search(const string& title)
{
    list<Movie>::iterator it = this->movies.begin();
    for (; it != this->movies.end(); ++it){
        if(it->getTitle() == title){
            return it;
        }
    }
    return it;
}

list<Movie> MovieContainer::getAll()
{
    list<Movie> newlist (this->movies);
    return newlist;
}

Movie* MovieContainer::get(const string& title)
{
    list<Movie>::iterator it = search(title);
    if(it != this->movies.end()){
        return &(*it);
    }
    return NULL;
}

Movie* MovieContainer::getOrder(int index)
{
    list<Movie>::iterator it = this->movies.begin();
    while (index && (it != this->movies.end())){
        ++it;
        --index;
    }
    if(it != this->movies.end()){
        return &(*it);
    }
    return NULL;
}

void MovieContainer::add(const Movie& obj)
{
    list<Movie>::iterator it = search(obj.getTitle());
    if(it == this->movies.end()){
        this->movies.push_back(obj);
    }else {
        string msg = "Movie: " + obj.getTitle();
        throw DuplicatedDataException(msg);
    }
}

void MovieContainer::remove(const string& title)
{
    list<Movie>::iterator it = search(title);
    if(it != this->movies.end()){
        this->movies.erase(it);
    }
}

void MovieContainer::update(const string& title, const string& description, const string& genre, int duration, int minimalAge)
{
    list<Movie>::iterator it = search(title);
    if(it != this->movies.end()){
        it->setDescription(description);
        it->setGenre(genre);
        it->setDuration(duration);
        it->setMinimalAge(minimalAge);
    }
}
