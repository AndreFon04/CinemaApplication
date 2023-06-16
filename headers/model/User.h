//
// Created by andre on 10-06-2023.
//

#ifndef CINEMAAPPLICATION_USER_H
#define CINEMAAPPLICATION_USER_H

#include <string>

using namespace std;

class User
{
private:
    string name;
    string email;
    string pwd;
    // bool admin;
    //PaymentDetails* payment_info;

public:
    User(const string& name, const string& email, const string& pwd);
    User(const User& obj);
    string getName() const;
    string getEmail() const;
    string getPwd() const;
    //PaymentDetails getPaymentInfo() const;
    bool isValidPwd(const string& pwd);
    void setName(const string& name);
    void setEmail(const string& email);
    void setPwd(const string& pwd);
    //void setPaymentInfo(PaymentDetails payment_info);
};

#endif //CINEMAAPPLICATION_USER_H
