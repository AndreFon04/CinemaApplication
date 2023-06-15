//
// Created by andre on 10-06-2023.
//

#include "Movie.h"

Movie::Movie(const string& title, const string& description, const string& genre, int duration, int minimalAge)
{
    this->title = title;
    this->description = description;
    this->genre = genre;
    this->duration = duration;
    this->minimalAge = minimalAge;
    return;
}

string Movie::getTitle() const
{
    return this->title;;
}

string Movie::getDescription() const
{
    return this->description;
}

string Movie::getGenre() const
{
    return this->genre;
}

int Movie::getDuration() const
{
    return this->duration;
}


int Movie::getMinimalAge() const
{
    return this->minimalAge;
}

void Movie::setTitle(const string& title)
{
    this->title = title;
    return;
}


void Movie::setDescription(const string& description)
{
    this->description = description;
    return;
}


void Movie::setGenre(const string& genre)
{
    this->genre = genre;
    return;
}


void Movie::setDuration(int duration)
{
    this->duration = duration;
    return;
}


void Movie::setMinimalAge(int minimalAge)
{
    this->minimalAge = minimalAge;
    return ;
}

