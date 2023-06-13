//
// Created by andre on 11-06-2023.
//

#include "UserContainer.h"
#include <string>

using namespace std;

list<User>::iterator UserContainer::search(const string& username)
{
    list<User>::iterator it = this->users.begin();
    for (; it != this->users.end(); ++it){
        if(it->getName() == username){
            return it;
        }
    }
    return it;
}

list<User> UserContainer::getAll()
{
    list<User> newlist (this->users);
    return newlist;
}

User* UserContainer::get(const string& username)
{
    list<User>::iterator it = search(username);
    if(it != this->users.end()){
        return &(*it);
    }
    return NULL;
}

void UserContainer::add(const User& obj)
{
    this->users.push_back(obj);
    return;
}

void UserContainer::remove(const string& username)
{
    return;
}

void UserContainer::update(const string& username, const string& email)
{
    return;
}


