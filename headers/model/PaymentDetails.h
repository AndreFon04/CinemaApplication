//
// Created by andre on 10-06-2023.
//

#ifndef CINEMAAPPLICATION_PAYMENTDETAILS_H
#define CINEMAAPPLICATION_PAYMENTDETAILS_H
#include <iostream>
#include <array>
using namespace std;

class User {

public:
    string Name;
    char* Email;

    struct payment_info {
        int card_number;
        int cvv;
        string owners_name;
    }; payment_info userPaymentInfo;

public:
    string AccountgetName() {
        char answer = 'N';

        while(answer == 'N') {
            cout << "Please introduce your account name: " << endl;
            cin >> Name;
            cout << "Account name:" << Name << "\nDo you wish to keep this name?\nY/N: ";
            cin >> answer;
        }

        return Name;
    }

    void getCardNumber() {
        payment_info& info = userPaymentInfo;

        cout << "Please introduce your card number: " << endl;
        cin >> info.card_number;

    }

    void getCVV() {
        payment_info& info = userPaymentInfo;

        cout << "Please introduce your CVV number: " << endl;
        cin >> info.cvv;

    }

    void getCardName() {
        payment_info& info = userPaymentInfo;

        cout << "Please introduce the card owner's name: " << endl;
        cin >> info.owners_name;

    }

    int AccountgetP_Info() {

        payment_info& info = userPaymentInfo;
        char answer = 'N';
        int answer2;

        while(answer == 'N') {

            getCardNumber();
            getCVV();
            getCardName();

            cout << "-------/-------\nCard Number: "<< info.card_number << "\nCVV number: " << info.cvv << "\nOwner's name: " << info.owners_name << "\n-------/-------\nDo you wish to keep this info?\nY/N: " << endl;
            cin >> answer;

            cout << "Which part would you like to change:\n[1] - Card number\n[2] - CVV number\n[3] - Card Name\n[4] - All of them\n" << endl;
            cin >> answer2;

            switch (answer2) {
                case 1:
                    getCardNumber();
                    answer = 'Y';
                    break;

                case 2:
                    getCVV();
                    answer = 'Y';
                    break;

                case 3:
                    getCardName();
                    answer = 'Y';
                    break;

                case 4:
                    break;
            }

        }
        return info.card_number;

    }

};

int main() {

    User user1;

    user1.Name = user1.AccountgetName();

    user1.AccountgetP_Info();

    cout << "Numero do cartao: " << user1.userPaymentInfo.card_number << endl;

    cout << "-------/-------\nCard Number: "<< user1.userPaymentInfo.card_number << "\nCVV number: " << user1.userPaymentInfo.cvv << "\nOwner's name: " << user1.userPaymentInfo.owners_name << "\n-------/-------" << endl;


}
#endif //CINEMAAPPLICATION_PAYMENTDETAILS_H
