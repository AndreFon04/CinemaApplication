//
// Created by andre on 12-06-2023.
//

#include <iostream>
#include <list>
#include "views/View.h"
#include <string>
#include "views/Utils.h"


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

    } while (op < 0 || op > 4);
    return op;
}

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