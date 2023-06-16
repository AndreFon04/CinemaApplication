#ifndef FIRSTPROJECT_PAYMENTINFO_H
#define FIRSTPROJECT_PAYMENTINFO_H

#include <iostream>
#include <array>
using namespace std;

<<<<<<< HEAD
class PaymentInfo {
public:
=======
class PaymentDetails {

public:
    string card_number;
    expiration_date;
    string cvv;
>>>>>>> 298bcca (eighth commit)

    struct payment_info {
        int card_number;
        int cvv;
        string owners_name;
    };
    payment_info userPInfo;

public:
    void getCardNumber();

    void getCVV();

    void getCardName();

    void AccountgetP_Info();
};

#endif //FIRSTPROJECT_PAYMENTINFO_H
