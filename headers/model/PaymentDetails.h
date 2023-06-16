#ifndef FIRSTPROJECT_PAYMENTINFO_H
#define FIRSTPROJECT_PAYMENTINFO_H

#include <iostream>
#include <array>
using namespace std;

class PaymentInfo {
public:

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
