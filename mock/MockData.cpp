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
    for (size_t i = 0; i < this->unavailableSeats[2].size(); i++) {
        layout3.setUnavailable(this->unavailableSeats[2][i][0], this->unavailableSeats[2][i][1], true);
    }
    Showtime obj1("Monday - S1 - 15:00", ptrMovies[2], 1, 32, layout1);
    container.add(obj1);
    Showtime obj2("Monday - S2 - 18:00", ptrMovies[1], 2, 32, layout2);
    container.add(obj2);
    Showtime obj3("Monday - S3 - 10:30", ptrMovies[0], 3, 64, layout3);
    container.add(obj3);
    Showtime obj4("Tuesday - S1 - 16:00", ptrMovies[2], 1, 64, layout1);
    container.add(obj4);
    Showtime obj5("Tuesday - S2 - 9:30", ptrMovies[0], 2, 64, layout2);
    container.add(obj5);
    Showtime obj6("Tuesday - S3 - 20:30", ptrMovies[1], 3, 64, layout3);
    container.add(obj6);
    Showtime obj7("Wednesday - S1 - 16:30", ptrMovies[2], 1, 64, layout1);
    container.add(obj7);
    Showtime obj8("Wednesday - S2 - 15:30", ptrMovies[0], 2, 64, layout2);
    container.add(obj8);
    Showtime obj9("Wednesday - S3 - 18:00", ptrMovies[1], 3, 64, layout3);
    container.add(obj9);
    Showtime obj10("Thursday - S1 - 11:30", ptrMovies[2], 1, 32, layout1);
    container.add(obj10);
    Showtime obj11("Thursday - S2 - 18:00", ptrMovies[1], 2, 32, layout2);
    container.add(obj11);
    Showtime obj12("Thursday - S3 - 15:30", ptrMovies[0], 3, 64, layout3);
    container.add(obj12);
    Showtime obj13("Friday - S1 - 15:30", ptrMovies[0], 1, 64, layout1);
    container.add(obj13);
    Showtime obj14("Friday - S2 - 14:30", ptrMovies[2], 2, 64, layout2);
    container.add(obj14);
    Showtime obj15("Friday - S3 - 17:30", ptrMovies[1], 3, 64, layout3);
    container.add(obj15);
    Showtime obj16("Friday - S3 - 11:00", ptrMovies[2], 3, 64, layout3);
    container.add(obj16);
}


void  MockData::generateData(Cinema& cinema){

    insertUsers(cinema.getUserContainer());
    insertMovies(cinema.getMovieContainer());
    insertShowtimes(cinema.getShowtimeContainer());
}
