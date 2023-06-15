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
    for (size_t  i = 0; i < this->initialMovies1.size(); i++){
        Movie obj(this->initialMovies1[i][0],this->initialMovies1[i][1],this->initialMovies1[i][2],this->initialMovies2[i][0],this->initialMovies2[i][1]);
        container.add(obj);
    }
}
/*
void  MockData::insertInstructors(InstructorContainer& container){
    for (size_t i = 0; i < name_profs.size();i++){
        Instructor obj(initial_profs[i],name_profs[i]);
        try{
            container.add(obj);
        }catch(DuplicatedDataException& e){
            //do nothing
        }
    }
}
*/

void  MockData::generateData(Cinema& cinema){

    insertUsers(cinema.getUserContainer());
    insertMovies(cinema.getMovieContainer());
}
