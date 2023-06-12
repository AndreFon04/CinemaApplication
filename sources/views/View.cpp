//
// Created by andre on 12-06-2023.
//

#include <list>
#include "views/View.h"
#include <string>

using namespace std;

int View::WelcomeScreen()
{
    int op = -1;
    do {
        cout << "\t\n\n********** Menu School **********\n";
        cout << "\t1 - log into your account\n\n";
        cout << "\t2 - create an account\n\n";
        cout << "\t3 - change your username\n\n";
        cout << "\n\t0 -  EXIT\n\n\n";
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
*/

}