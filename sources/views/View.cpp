//
// Created by andre on 12-06-2023.
//

#include <iostream>
#include <list>
#include "View.h"
#include <string>
#include <cstring>
#include "Utils.h"
#include "User.h"
#include "UserContainer.h"


using namespace std;

int View::WelcomeScreen()
{
    int op = -1;
    do {
        cout << "\n\n";
        cout << "   _____      _         _                                _           _         _   \n";
        cout << "  / ____|    (_)       | |                              (_)         | |       | |  \n";
        cout << " | (___   ___ _  __ _  | |__   ___ _ __ ___       __   ___ _ __   __| | ___   | |  \n";
        cout << "  \\___ \\ / _ \\ |/ _` | | '_ \\ / _ \\ '_ ` _ \\  ____\\ \\ / / | '_ \\ / _` |/ _ \\  | |  \n";
        cout << "  ____) |  __/ | (_| | | |_) |  __/ | | | | ||____|\\ V /| | | | | (_| | (_) | |_|  \n";
        cout << " |_____/ \\___| |\\__,_| |_.__/ \\___|_| |_| |_|       \\_/ |_|_| |_|\\__,_|\\___/  (_)  \n";
        cout << "            _/ |                                                                   \n";
        cout << "           |__/                                                                    \n";
        cout << "\n\n";
        cout << "1 - log into your account\n";
        cout << "2 - create an account\n";
        cout << "3 - change your username\n";
        cout << "\n0 -  EXIT\n\n\n";
        op = Utils::getNumber("Option");

    }while(op < 0 || op > 3);
    return op;
}



int View::menuCinema() {
    int op = -1;
    do{
        cout<<"\n\n********** Main Menu **********\n";
        cout<<"1 - Add\n";
        cout<<"2 - Find\n";
        cout<<"3 - Remove\n";
        cout<<"4 - Update\n";
        cout<<"5 - List\n";
        cout<<"\n0 - Exit\n";
        op = Utils::getNumber("Option");
    }while(op < 0 || op > 5);
    return op;
}





/*
char View::runLogin() {
    int op = -1;
    do {
        //char user[30], pwd[30], pwd1[30];
        bool ok = false;

        cout << "\n\n********** Menu Login **********\n";
        string user = Utils::getString("Enter your username: ");
        string pwd = Utils::getString("Enter your password: ");

        UserContainer &container = this->model.getUserContainer();
        User *ptr = container.get(user);

        if (ptr != NULL) {
            this->studentView.printStudent(ptr);
            ok = ptr->validPwd(pwd);
        }
        if (ok){
            //... Login accepted
        }else{
            // Login rejected
        }




        if (user.validPwd() == true) {
            printf("\n\n**Welcome Mr. %s, your account has been verified**\n\n", user);
        } else {
            cout << "\n\n**Your password did not match**\n\n";
        }
    }
}

*/

    /*
    switch (c) {
        case 1:
            WelcomeScreen::Login();
            break;

        case 2:
            WelcomeScreen::createClient();
            break;

        case 3:
            WelcomeScreen::changeUsername();
            break;

    }
        string createClient;
        string createAdmin;


}

     */