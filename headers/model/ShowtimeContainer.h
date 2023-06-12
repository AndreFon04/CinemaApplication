//
// Created by andre on 11-06-2023.
//

#ifndef CINEMAAPPLICATION_SHOWTIMECONTAINER_H
#define CINEMAAPPLICATION_SHOWTIMECONTAINER_H

#include <list>
#include "Showtime.h"
#include <string>

class ShowtimeContainer
{
private:
    list<Showtime> showtimes;
    list<Showtime>::iterator search(const string& name);

public:
    list<Showtime> getAll();
    Showtime* get(const string& name);
    void add(const Showtime& obj);
    void remove(const string& name);
    //void update(const string& title, const string& description);

};

#endif //CINEMAAPPLICATION_SHOWTIMECONTAINER_H
