//
// Created by andre on 11-06-2023.
//

#include "model/UserContainer.h"
#include <string>

using namespace std;

list<User>::iterator UserContainer::search(const string& username)
{
    list<User>::iterator it = this->users.begin();
    return it;
}

list<User> UserContainer::getAll()
{
    list<User> newlist (this->users);
    return newlist;
}

User* UserContainer::get(const string& username)
{
    return NULL;
}

void UserContainer::add(const User& obj)
{
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


