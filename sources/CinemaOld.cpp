//
// Created by andre on 23-05-2023.
//
#include <iostream>
#include "CinemaOld.h"

using namespace std;

WelcomeScreen WelcomeScreen::Welcome()
{
    cout << "\n";
    cout << "   _____      _         _                                _           _         _   \n";
    cout << "  / ____|    (_)       | |                              (_)         | |       | |  \n";
    cout << " | (___   ___ _  __ _  | |__   ___ _ __ ___       __   ___ _ __   __| | ___   | |  \n";
    cout << "  \\___ \\ / _ \\ |/ _` | | '_ \\ / _ \\ '_ ` _ \\  ____\\ \\ / / | '_ \\ / _` |/ _ \\  | |  \n";
    cout << "  ____) |  __/ | (_| | | |_) |  __/ | | | | ||____|\\ V /| | | | | (_| | (_) | |_|  \n";
    cout << " |_____/ \\___| |\\__,_| |_.__/ \\___|_| |_| |_|       \\_/ |_|_| |_|\\__,_|\\___/  (_)  \n";
    cout << "            _/ |                                                                   \n";
    cout << "           |__/                                                                    \n";
    cout << "\n";
}

char WelcomeScreen::Login()
{
    char user[30], pwd[30], pwd1[30];

    cout << "Enter your username: \n";
    cin >> user;
    cout << "Enter your password: \n";
    cin >> pwd;
    cout << "Confirm your password: \n";
    cin >> pwd1;
    if(strcmp(pwd,pwd1)==0) {
        printf("\n\n**Welcome Mr. %s, your account has been verified**\n\n", user);
    } else {
        cout << "\n\n**Your password did not match**\n\n";
    }

    if (user == "greg" && pwd == "dunn")
    {
        WelcomeScreen::LoginAdmin();
    }



    getString(Utils);
    {
        return username;
        return password;
    }
    validateLogin();
    {
        if (database::Database == True)
        {
            return LoginOK;
        }
    }
    return confirmationLogin;
}

string WelcomeScreen::LoginAdmin()
{

}

string WelcomeScreen::createClient()
{
    void getData();
    if (verificationData == true)
    {
        return dataOK;
        return clientCreated;
    }
    else
    {
        UserNotFoundException(data:string)
        const char what();
    }

    getClient()
    {
        return ClientContainer;
    }
}

string WelcomeScreen::createAdmin()
{
    getAdmin()
}

string WelcomeScreen::changeUsername()
{




}




