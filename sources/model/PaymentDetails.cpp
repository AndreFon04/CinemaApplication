#include <iostream>
#include <array>
#include "PaymentInfo.h"

void PaymentInfo::getCardNumber() {
    payment_info& info = userPInfo;

    cout << "Please introduce your card number: " << endl;
    cin >> info.card_number;

}

void PaymentInfo::getCVV() {
    payment_info& info = userPInfo;

    cout << "Please introduce your CVV number: " << endl;
    cin >> info.cvv;

}

void PaymentInfo::getExpirationDate() {
    payment_info& info = userPInfo;

    cout << "Please introduce your card's expiration date (XX/XX): " << endl;
    cin >> info.expiration_date;

}

void PaymentInfo::getCardName() {
    payment_info& info = userPInfo;

    cout << "Please introduce the card owner's name (please type a '_' in between the names): " << endl;
    cin >> info.owners_name;

}

void PaymentInfo::AccountgetP_Info() {

    payment_info& info = userPInfo;
    char answer = 'Y';
    int answer2;

    while(answer == 'Y' || answer == 'y') {
        if(answer == 'Y' || answer == 'Y') {

            getCardNumber();
            getCVV();
            getCardName();
            getExpirationDate();

            cout << "-------/-------\nCard Number: " << info.card_number << "\nCVV number: " << info.cvv << "\nOwner's name: " << info.owners_name
                 << "\nExpiration Date: " << info.expiration_date <<  "\n-------/-------\nWould you like to change your info?\nY/N: " << endl;
            cin >> answer;
        }

        if(answer == 'Y' || answer == 'y') {
            cout << "Which part would you like to change:\n[1] - Card number\n[2] - CVV number\n[3] - Card Name\n[4] - Expiration Date\n[5] - All of them\n" << endl;
            cin >> answer2;

            switch (answer2) {
                case 1:
                    getCardNumber();
                    answer = 'N';
                    break;

                case 2:
                    getCVV();
                    answer = 'N';
                    break;

                case 3:
                    getCardName();
                    answer = 'N';
                    break;

                case 4:
                    getExpirationDate();
                    answer = 'N';
                    break;

                case 5:
                    break;
            }
        }
        cout << "-------/-------\nCard Number: " << info.card_number << "\nCVV number: " << info.cvv << "\nOwner's name: " << info.owners_name << "\nExpiration Date: " << info.expiration_date << "\n-------/-------" << endl;
    }

}