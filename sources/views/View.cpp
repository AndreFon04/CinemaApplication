//
// Created by andre on 12-06-2023.
//

#include <iostream>
#include <ctime>
#include <chrono>
#include <list>
#include "View.h"
#include <string>

using namespace std;


int View::WelcomeScreen()
{
    int op = -1;
    do {
        cout << "\n\n";
        cout << " __      __   _                    _         _   _          _            _        _                       _        _                   _ \n";
        cout << " \\ \\    / /__| |__ ___ _ __  ___  | |_ ___  | |_| |_  ___  | |__  ___ __| |_   __(_)_ _  ___ _ __  __ _  (_)_ _   | |_ _____ __ ___ _ | |\n";
        cout << "  \\ \\/\\/ / -_) / _/ _ \\ '  \\/ -_) |  _/ _ \\ |  _| ' \\/ -_) | '_ \\/ -_|_-<  _| / _| | ' \\/ -_) '  \\/ _` | | | ' \\  |  _/ _ \\ V  V / ' \\|_|\n";
        cout << "   \\_/\\_/\\___|_\\__\\___/_|_|_\\___|  \\__\\___/  \\__|_||_\\___| |_.__/\\___/__/\\__| \\__|_|_||_\\___|_|_|_\\__,_| |_|_||_|  \\__\\___/\\_/\\_/|_||_(_)\n";
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
        cout << "2 - Update email/password\n";
        cout << "\n0 - RETURN\n\n";
        op = Utils::getNumber("Option");
        cout << "\n";
    }while(op < 0 || op > 2);
    return op;
}

void View::printTickets(Showtime* showtime, list<Seat *> seats)
{
    int w = 42;
    cout << "\nEnjoy your movie and come back anytime\n\n\n";
    cout << "\n              --- Tickets ---\n";
    // recolher info comum
    string title = showtime->getMovie()->getTitle();
    int screen = showtime->getScreen();
    string showtimeName = showtime->getSessionName();

    for (list<Seat*>::iterator it = seats.begin(); it != seats.end(); ++it) {
        // recolher info específica de cada um
        int row = (*it)->getRow();
        int column = (*it)->getColumn();
        string seat = (*it)->getRowColumn();
        // imprimir bilhete formatado

        string s((w-title.size())/2, ' ');
        cout << endl << s << title << "\n\n";
        cout << "\nScreen: " << screen << " / Time: " << currentTime() << "\n";
        string s2(13, ' ');
        cout << "Seat: " << seat;
        //cout << s2 << "Row: " << (char) (row + 'A') + 1 << "  Seat: " << column + 1 << "\n";
        cout << "\n                --- // ---\n\n";
    }
}

void View::printMovies(list<Movie>& movies)
{
    int i = 1;
    for (list<Movie>::iterator it = movies.begin(); it != movies.end(); ++it) {
        cout << i << " -  " << it->getTitle() <<  "\n";
        i++;
    }
}

void View::printMovieSpecifics(list<Movie>& movies, int index)
{
    list<Movie>::iterator it;
    for (it = movies.begin(); (--index > 0) && (it != movies.end()); ++it) {
        // do nothing
    }
    cout << "- " << it->getTitle() <<  "\n\n";
    cout << "- " << it->getDescription() <<  "\n\n";
    cout << "- " << it->getGenre() <<  "\n";
    cout << "- " << it->getDuration() <<  " min\n";
    cout << "- M" << it->getMinimalAge() <<  "\n";
}


void View::printShowtimes(list<Showtime> showtimes)
{
    int i = 1;
    for (list<Showtime>::iterator it = showtimes.begin(); it != showtimes.end(); ++it) {
        cout << i << " -  " << it->getSessionName() <<  "\n";
        i++;
        //printSeatLayout(it->getSeatLayout());
    }
}

void View::printSeatLayout(SeatLayout* seatLayout) {
    cout << "***************************************************\n";
    cout << "  ****************** Screen *********************\n";
    cout << "    *******************************************\n\n";
    for (int i = 0; i < seatLayout->getNumberOfRows(); i++) {
        cout << (char) ('A' + i) << "   ";
        for (int j = seatLayout->getNumberOfColumns(i) - 1; j >= 0; j--) {
            if (seatLayout->getSeat(i, j)->isUnavailable())
            {
                cout << "     ";
            }else if (seatLayout->getSeat(i, j)->isOccupied())
            {
                cout << "[XX] ";
            }else if (seatLayout->getSeat(i, j)->isSelected())
            {
                cout << "[SS] ";
            }else
            {
                cout << "[";
                if (j + 1 < 10) cout << " ";
                cout << j + 1 << "] ";
            }
        }
        cout << "\n";
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
        cout << "\n0 - RETURN\n\n";
        op = Utils::getNumber("Option");
        cout << "\n";
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
        cout << "\n*Press 0 to RETURN*\n\n";
        op = Utils::getNumber("What movie would you like to see?");
        cout << "\n";
    }while(op < 0 || op > movies.size());
    return op;
}


int View::SpecificsMenu(list<Movie>& movies)
{
    int op = -1;
    do{
        cout << "\n\n********** Specifics Menu **********\n\n";
        printMovies(movies);
        cout << "\n*Press 0 to RETURN*\n\n";
        op = Utils::getNumber("What movie would you like to know more about?");
        cout << "\n\n";
        //op = Movie::getTitle();
    }while(op < 0 || op > movies.size());
    return op;
}


int View::ListSessionsMenu(list<Showtime> showtimes)
{
    int op = -1;
    do{
        cout << "\n\n********** Session Selection Menu **********\n\n";
        if (!showtimes.empty()) {
            this->printShowtimes(showtimes);
        }
        cout << "\n";
        cout << "\n*Press 0 to RETURN*\n\n";
        op = Utils::getNumber("What session would you prefer?");
        cout << "\n\n";
    }while(op < 0 || op > showtimes.size());
    return op;
}



string View::SeatSelectionMenu(SeatLayout* layout)
{
    this->printSeatLayout(layout);
    cout << "\n\n*Press 0 to CONTINUE*\n\n";
    string s = Utils::getString("Select your seat (e.g. A1)");
    cout << "\n\n";
    return s;

}

bool View::BookingMenu(Showtime* showtime, list<Seat*> seats)
{
    string s, cardNum, expMon, expYear, cvv;
    do {
        cout << "Selected seats: ";
        for (list<Seat *>::iterator it = seats.begin(); it != seats.end(); ++it) {
            cout << (*it)->getRowColumn() << " ";
        }
        cout << "\n\n*Press 0 to RETURN*\n\n";
        s = Utils::getString("Do you wish to proceed with booking? (y/n)");
        cout << "\n\n";
    } while ((s != "Y") && (s != "y") && (s != "N") && (s != "n") && (s != "0"));

    if ((s == "N") || (s == "n") || (s == "0")){
        //CLEAR SELECTED
        for (list<Seat *>::iterator it = seats.begin(); it != seats.end(); ++it) {
            (*it)->setSelected(false);
        }

        return false;
    }
    cout << "\nInsert payment details\n";
    cardNum = Utils::getString("Card number");
    expMon = Utils::getString("Expiration Month");
    expYear = Utils::getString("Expiration Year");
    cvv = Utils::getString("CVV");

    bool auth = authorizeCardPayment(cardNum, expMon, expYear, cvv);
    if (!auth){
        // Insucesso no pagamento
        cout << "\nPayment failed!!!\n";
    }else{
        cout << "\nPayment successful\n";
        printTickets(showtime, seats);
    }
    return auth;
}

bool View::authorizeCardPayment(const string& cardNum, const string& expMon, const string& expYear, const string& cvv)
{
    // Dummy function
    return true;
}

string View::currentTime()
{
    chrono::system_clock::time_point now = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);
    string timeString = ctime(&currentTime);
    return timeString;
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

/*
int View::UpdateUser()
{
    int op = -1;
    do{
        cout << "\n\nWhat is your new email/password?: ";
        cout << "\n0 - RETURN\n";
        op = Utils::getString("What is your new email/password?");
    }while(op < 0 || op > 2 );
    return op;
}
*/


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