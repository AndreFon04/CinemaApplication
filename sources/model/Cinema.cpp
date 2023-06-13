//
// Created by andre on 11-06-2023.
//

#include "Cinema.h"

using namespace std;

Cinema::Cinema()
{
    this->name = "";
}


Cinema::Cinema(const string& name)
{
    this->name = name;
}


const string& Cinema::getName() const
{
    return name;
}

void Cinema::setName(const string &name)
{
    return;
}

UserContainer & Cinema::getUserContainer()
{
    return this->users;
}

MovieContainer & Cinema::getMovieContainer()
{
    return this->movies;
}

ShowtimeContainer & Cinema::getShowtimeContainer()
{
    return this->showtimes;
}