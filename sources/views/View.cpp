//
// Created by andre on 12-06-2023.
//

#include <iostream>
#include <list>
#include "View.h"
#include <string>

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
        cout << "\n0 -  EXIT\n\n\n";
        op = Utils::getNumber("Option");

    }while(op < 0 || op > 2);
    return op;
}


int View::MainMenu()
{
    int op = -1;
    do{
        cout << "\n\n********** Main Menu **********\n\n";
        cout << "1 - List movies\n";
        cout << "2 - Find movies\n";
        cout << "3 - Update email/password\n";
        cout << "\n0 - RETURN\n";
        op = Utils::getNumber("Option");
    }while(op < 0 || op > 3);
    return op;
}


void View::printMovies(list<Movie>& movies)
{
    int i = 1;
    for (list<Movie>::iterator it = movies.begin(); it != movies.end(); ++it) {
        cout << i << " -  " << it->getTitle() <<  "\n";
        i++;
    }
}

void View::printShowtimes(list<Showtime> showtimes)
{
    int i = 1;
    for (list<Showtime>::iterator it = showtimes.begin(); it != showtimes.end(); ++it) {
        cout << i << " -  " << it->getShowtimesMovies() <<  "\n";
        i++;
    }
}

int View::MoviesMenu(list<Movie>& movies)
{
    int op = -1;
    do{
        cout << "\n\n********** Movies Menu **********\n\n";
        //print list of movies
        printMovies(movies);
        cout << "\n\n1 - Buy tickets\n";
        cout << "2 - Find more about a specific movie\n";
        cout << "\n0 - RETURN\n";
        op = Utils::getNumber("Option");
    }while(op < 0 || op > 2);
    return op;
}


int View::BuyTicketsMenu(list<Movie>& movies)
{
    int op = -1;
    do{
        cout << "\n\n********** Buy Menu **********\n\n";
        //print list of movies
        printMovies(movies);
        cout << "\n\nWhat movie would you like to see?: " << op;
        cout << "\n*Press 0 to RETURN*\n";
        op = Utils::getNumber("Option");
    }while(op < 0 || op > movies.size());
    return op;
}


int View::SpecificsMenu(list<Movie>& movies)
{
    int op = -1;
    do{
        cout << "\n\n********** Specifics Menu **********\n\n";
        //print list of movies
        printMovies(movies);
        cout << "\n\nWhat movie would you like to know more about?: " << op;
        cout << "\n*Press 0 to RETURN*\n";
        op = Utils::getNumber("Option");
        //op = Movie::getTitle();
    }while(op < 0 || op > movies.size());
    return op;
}


int View::ListSessionsMenu()
{
    int op = -1;
    //print list of sessions
    do{
        cout << "\n\n********** Sessions Menu **********\n\n";
        cout << "What session would you prefer?: " << op;
        cout << "\n*Press 0 to RETURN*\n";
        op = Utils::getNumber("Option");
    }while(op < 0 || op > 2/*sessions.size()*/ );
    return op;
}

/*
int View::FindMovie()
{
    int op = -1;
    do{
        cout << "\n\nWhat movie would you like to find?: ";
        cout << "\n0 - RETURN\n";
        op = Utils::getNumber("Option");
    }while(op < 0 || op > 2  > do o numero de filmes disponiveis (atualizados));
    return op;
}
*/


int View::UpdateUser()
{
    int op = -1;
    do{
        cout << "\n\nWhat is your new email/password?: ";
        cout << "\n0 - RETURN\n";
        op = Utils::getNumber("Option");
    }while(op < 0 || op > 2 /* > do o numero de filmes disponiveis (atualizados)*/);
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