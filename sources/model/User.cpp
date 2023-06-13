//
// Created by andre on 10-06-2023.
//

#include "User.h"
#include <string>

User::User(const string& name, const string& email, const string& pwd)
{
    this->name = name;
    this->email = email;
    this->pwd = pwd;
    return;
}

string User::getName()
{
    return this->name;
}


string User::getEmail()
{
    return this->email;
}

string User::getPwd() {
    return this->pwd;
}

/*
PaymentDetails User::getPaymentInfo()
{
    return this->payment_info;
}
*/

bool User::validPwd(const string& pwd)
{
    return this->pwd == pwd;
}

void User::setName(const string& name)
{
    this->name = name;
    return;
}

void User::setEmail(const string& email)
{
    this->email = email;
    return;
}

void User::setPwd(const string& pwd)
{
    this->pwd = pwd;
    return;
}






/*
void User::setPaymentInfo(PaymentDetails payment_info)
{
    this->payment_info = payment_info;
    return;
}
*/
