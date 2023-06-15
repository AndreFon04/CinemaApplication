//
// Created by andre on 14-06-2023.
//

#include "DuplicatedDataException.h"


DuplicatedDataException::DuplicatedDataException(string data){
    this->data = "Error: ["+ data + "] duplicated!!";
}

const char* DuplicatedDataException::what(){
    return this->data.c_str();
}
