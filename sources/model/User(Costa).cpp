#include <iostream>
#include <array>
using namespace std;

class User {

public:
    string Name;
    string Email;

    struct payment_info {
        int card_number;
        int cvv;
        string owners_name;
    }; payment_info userPInfo;

public:
    void AccountgetName() {
        char answer = 'Y';

        while(answer == 'Y' || answer == 'y') {
            cout << "Please introduce your account name: " << endl;
            cin >> Name;
            cout << "Account name:" << Name << "\nWould you like to change this name?\nY/N: ";
            cin >> answer;
        }
    }

    void getEmail() {
        char answer = 'Y';

        while(answer == 'Y' || answer == 'y') {
            cout << "Please introduce your email: " << endl;
            cin >> Email;
            cout << "Email: " << Email << "\nWould you like to change your email?\nY/N: ";
            cin >> answer;
        }
    }

    void getCardNumber() {
        payment_info& info = userPInfo;

            cout << "Please introduce your card number: " << endl;
            cin >> info.card_number;

    }

    void getCVV() {
        payment_info& info = userPInfo;

            cout << "Please introduce your CVV number: " << endl;
            cin >> info.cvv;

    }

    void getCardName() {
        payment_info& info = userPInfo;

            cout << "Please introduce the card owner's name (please type a '_' in between the names): " << endl;
            cin >> info.owners_name;

    }

    void AccountgetP_Info() {

        payment_info& info = userPInfo;
        char answer = 'Y';
        int answer2;

    while(answer == 'Y' || answer == 'y') {
        if(answer == 'Y' || answer == 'Y') {

            getCardNumber();
            getCVV();
            getCardName();

            cout << "-------/-------\nCard Number: " << info.card_number << "\nCVV number: " << info.cvv
                 << "\nOwner's name: " << info.owners_name << "\n-------/-------\nWould you like to change your info?\nY/N: "
                 << endl;
            cin >> answer;
        }

        if(answer == 'Y' || answer == 'y') {
            cout << "Which part would you like to change:\n[1] - Card number\n[2] - CVV number\n[3] - Card Name\n[4] - All of them\n" << endl;
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
                    break;
            }
        }
        cout << "-------/-------\nCard Number: " << info.card_number << "\nCVV number: " << info.cvv << "\nOwner's name: " << info.owners_name << "\n-------/-------" << endl;
    }

    }

};
