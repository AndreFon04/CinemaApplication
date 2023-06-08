#include <iostream>
#include <string>
#include "Cinema.h"
#include "Bilhete.h"

using namespace std;

int main()
{
    int c;
    WelcomeScreen Welcome;
    cout << "\tPress 1 to log into your account\n\n";
    cout << "\tPress 2 to create an account\n\n";
    cout << "\tPress 3 to change your username\n\n";
    cout << "\tPress 4 to EXIT\n\n\n";
    cout << "\t\tSo...what will it be for today: " << endl;
    cin >> c;

    switch(c)
    {
        case 1:
            WelcomeScreen::Login();
            break;


        case 2:
            WelcomeScreen::createClient();
            break;


        case 3:
            WelcomeScreen::changeUsername();


    }




    string createClient;
    string createAdmin;





    Bilhete ticket;
    ticket.Movie();
    ticket.Ticket();

    return 0;
}
