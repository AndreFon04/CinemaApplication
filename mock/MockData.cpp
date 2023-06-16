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
    SeatLayout layout(9, 17);
    for (size_t i = 0; i < this->unavailableSeats[0].size(); i++) {
        layout.setUnavailable(this->unavailableSeats[0][i][0], this->unavailableSeats[0][i][1], true);
    }
    Showtime obj("Fri-S1-1500", ptrMovies[1], 1, 32, layout);
    container.add(obj);
    Showtime obj2("Fri-S1-1800", ptrMovies[1], 1, 32, layout);
    container.add(obj2);
    SeatLayout layout2(7, 15);
    for (size_t i = 0; i < this->unavailableSeats[1].size(); i++) {
        layout2.setUnavailable(this->unavailableSeats[1][i][0], this->unavailableSeats[1][i][1], true);
    }
    Showtime obj3("Fri-S2-1530", ptrMovies[0], 2, 64, layout2);
    container.add(obj3);
}


void  MockData::generateData(Cinema& cinema){

    insertUsers(cinema.getUserContainer());
    insertMovies(cinema.getMovieContainer());
    insertShowtimes(cinema.getShowtimeContainer());
}
