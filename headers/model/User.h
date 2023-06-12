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
    //PaymentDetails* payment_info;

public:
    User(const string& name, const string& email);
    string getName();
    string getEmail();
    //PaymentDetails getPaymentInfo();
    void setName(const string& name);
    void setEmail(const string& email);
    //void setPaymentInfo(PaymentDetails payment_info);
};

#endif //CINEMAAPPLICATION_USER_H
