//
// Created by andre on 10-06-2023.
//

#include "MockData.h"

#include "DuplicatedDataException.h"


void  MockData::insertUsers(UserContainer& container){
    for (size_t  i = 0; i < this->initialUsers.size(); i++){
        //User obj(this->initialUsers[i][0],this->initialUsers[i][1],this->initialUsers[i][2]);
        User obj(this->initialUsers[i]);
        container.add(obj);
    }
}

void  MockData::insertMovies(MovieContainer& container){
    for (size_t  i = 0; i < this->initialMovies.size(); i++){
        Movie obj(this->initialMovies[i]);
        container.add(obj);
        // save movies ptr
        this->ptrMovies[i] = container.get(this->initialMovies[i].getTitle());
    }
}

void  MockData::insertShowtimes(ShowtimeContainer& container){
    SeatLayout layout1(9, 17);
    for (size_t i = 0; i < this->unavailableSeats[0].size(); i++) {
        layout1.setUnavailable(this->unavailableSeats[0][i][0], this->unavailableSeats[0][i][1], true);
    }
    SeatLayout layout2(7, 15);
    for (size_t i = 0; i < this->unavailableSeats[1].size(); i++) {
        layout2.setUnavailable(this->unavailableSeats[1][i][0], this->unavailableSeats[1][i][1], true);
    }
    SeatLayout layout3(17, 28);
    for (size_t i = 0; i < this->unavailableSeats[1].size(); i++) {
        layout3.setUnavailable(this->unavailableSeats[2][i][0], this->unavailableSeats[2][i][1], true);
    }
    Showtime obj1("Fri-S1-1500", ptrMovies[1], 1, 32, layout1);
    container.add(obj1);
    Showtime obj2("Fri-S1-1800", ptrMovies[1], 1, 32, layout1);
    container.add(obj2);
    Showtime obj3("Fri-S2-1530", ptrMovies[0], 2, 64, layout2);
    container.add(obj3);
    Showtime obj4("Fri-S2-1530", ptrMovies[0], 2, 64, layout2);
    container.add(obj4);
    Showtime obj5("Fri-S2-1530", ptrMovies[0], 2, 64, layout2);
    container.add(obj5);
    Showtime obj6("Fri-S2-1530", ptrMovies[0], 2, 64, layout2);
    container.add(obj6);
    Showtime obj7("Fri-S2-1530", ptrMovies[0], 2, 64, layout2);
    container.add(obj7);
    Showtime obj8("Fri-S2-1530", ptrMovies[0], 2, 64, layout2);
    container.add(obj8);
}


void  MockData::generateData(Cinema& cinema){

    insertUsers(cinema.getUserContainer());
    insertMovies(cinema.getMovieContainer());
    insertShowtimes(cinema.getShowtimeContainer());
}
