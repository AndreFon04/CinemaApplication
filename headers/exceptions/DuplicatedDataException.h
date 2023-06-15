//
// Created by andre on 14-06-2023.
//

#ifndef CINEMAAPPLICATION_DUPLICATEDDATAEXCEPTION_H
#define CINEMAAPPLICATION_DUPLICATEDDATAEXCEPTION_H

#include <exception>
#include <string>
using namespace std;

class DuplicatedDataException :public exception{
private:
    string data;
public:
    DuplicatedDataException(string data);
    //override what function
    const char* what();
};

#endif //CINEMAAPPLICATION_DUPLICATEDDATAEXCEPTION_H
