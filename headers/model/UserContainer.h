//
// Created by andre on 11-06-2023.
//

#ifndef CINEMAAPPLICATION_USERCONTAINER_H
#define CINEMAAPPLICATION_USERCONTAINER_H

#include "User.h"
#include <list>
#include <string>

class UserContainer
{
private:
    list<User> users;
    list<User>::iterator search(const string& username);

public:
    list<User> getAll();
    User* get(const string& username);
    void add(const User& obj);
    void remove(const string& username);
    void update(const string& username, const string& email);

};

#endif //CINEMAAPPLICATION_USERCONTAINER_H
