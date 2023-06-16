//
// Created by andre on 10-06-2023.
//

#include <iostream>
#include <string>
#include "Utils.h"
#include "Controller.h"
#include "View.h"


using namespace std;


Controller::Controller(Cinema& cinema){
    this->model = cinema;
}


void Controller::run(){
    int op = -1;
    do{
        this->currentUser = NULL;
        op=this->view.WelcomeScreen();
        switch(op){
            case 1:
                runLogin();
                break;
            case 2: {
                // MOCK: list users
                UserContainer &container = this->model.getUserContainer();
                list<User> users = container.getAll();
                for (list<User>::iterator it = users.begin(); it != users.end(); ++it) {
                    cout << it->getName() << " " << it->getEmail() << " " << it->getPwd() << endl;
                }

                cout << "Escolhida opção 2" << endl;
                break;
            }
            case 3: {
                // MOCK: list movies
                MovieContainer &container = this->model.getMovieContainer();
                list<Movie> movies = container.getAll();
                for (list<Movie>::iterator it = movies.begin(); it != movies.end(); ++it) {
                    cout << it->getTitle() << " " << it->getDescription() << " " << it->getGenre() << " " << it->getDuration() << " " << it->getMinimalAge() << endl;
                }

                cout << "Escolhida opção 3" << endl;
                break;
            }
            case 4: {
                // MOCK: list sessions
                ShowtimeContainer &container = this->model.getShowtimeContainer();
                list<Showtime> showtimes = container.getAll();
                for (list<Showtime>::iterator it = showtimes.begin(); it != showtimes.end(); ++it) {
                    cout << it->getMovie() << " " << it->getSessionName() << " " << it->getScreen() << " " << it->getAvailableSeats() << endl;
                }

                cout << "Escolhida opção 4" << endl;
                break;
            }
            default:
                break;
        }
    }while(op!=0);
}


void Controller::runLogin() {
    bool ok = false;

    string user = Utils::getString("\nEnter your username");
    string pwd = Utils::getString("Enter your password");

    UserContainer &container = this->model.getUserContainer();
    User *ptr = container.get(user);

    if (ptr != NULL) {
        ok = ptr->isValidPwd(pwd);
    }
    if (ok){
        //Login accepted
        this->currentUser = ptr;
        //if (ptr->isAdmin()) {
        //    runAdminMenu()
        //} else {
            runMainMenu();
        //}
    }else{
        // Login rejected
        cout << "\n\n**User or password invalid**\n\n";
    }
}


void Controller::runMainMenu(){
    int op = -1;
    do{
        op=this->view.MainMenu();
        switch(op){
            case 1:
                runMoviesMenu();
                break;
            case 2:
                //runUpdateUser();
                break;
            default:
                break;
        }
    }while(op != 0);
}


void Controller::runMoviesMenu(){
    int op = -1;
    MovieContainer &container = this->model.getMovieContainer();
    list<Movie> movies = container.getAll();
    do{
        op=this->view.MoviesMenu(movies);
        switch(op){
            case 1:
                runBuyTicketsMenu();
                //cout << "Escolhida opção 1" << endl;
                break;
            case 2:
                runSpecificsMenu();
                //cout << "Escolhida opção 2" << endl;
                break;
            default:
                break;
        }
    }while(op != 0);
}

void Controller::runBuyTicketsMenu(){
    int op = -1;
    MovieContainer &container = this->model.getMovieContainer();
    list<Movie> movies = container.getAll();
    do{
        op=this->view.BuyTicketsMenu(movies);
        Movie* movie = container.getOrder(op - 1);
        // Listar Showtimes do movie
        // obter o container showtimes, iterator por todos e listar os que tem getMovie() == movie
        runListSessionsMenu(movie);
        //this->view.ListSessionsMenu();
    }while(op != 0);
}

void Controller::runListSessionsMenu(Movie* movie){
    int op = -1;
    ShowtimeContainer &container = this->model.getShowtimeContainer();
    list<Showtime> showtimes = container.getShowtimesMovie(movie);
    do{
        op=this->view.ListSessionsMenu(showtimes);
        if ( op > 0) {
            list<Showtime>::iterator it = showtimes.begin();
            for (int n = op; (--n > 0) && (it != showtimes.end()); ++it) {
                //do nothing
            }
            runSeatSelectionMenu(&(*it));
        }
    }while(op != 0);
}


void Controller::runSeatSelectionMenu(Showtime* showtime){
    int op = -1; int row, column; string s;
    //ShowtimeContainer &container = this->model.getShowtimeContainer();
    //list<Showtime> showtimes = container.getShowtimesMovie(movie);
    list<Seat *> seats; Seat* seat;
    SeatLayout* layout = showtime->getSeatLayout();
    do{
        s = this->view.SeatSelectionMenu(layout);
        //check isSeatValid(s)
        if (layout->getSeatRowColIsValid(row, column, s)) {
            seat = layout->getSeat(row, column);
            if (seat->isUnavailable() || seat->isOccupied()) {
                cout << "\nInvalid seat\n";
            }else{
                seat->setSelected(true);
                seats.push_back(seat);
            }
        } else {
            if (s != "0") {
                cout << "\nInvalid seat\n";
            }
        }
    }while(s != "0");
    if (!seats.empty()) {
        runBookingMenu(showtime, seats);
    }
}


void Controller::runBookingMenu(Showtime* showtime, list<Seat *> seats)
{
    bool auth = this->view.BookingMenu(showtime, seats);

    if(auth){
        //do booking
        for (list<Seat *>::iterator it = seats.begin(); it != seats.end(); ++it) {
            (*it)->setOccupied(true);
            (*it)->setSelected(false);
        }
        Booking obj(this->currentUser, showtime, seats);
        this->model.getBookingContainer().add(obj);
    }
}


void Controller::runSpecificsMenu(){
    int op = -1;
    MovieContainer &container = this->model.getMovieContainer();
    list<Movie> movies = container.getAll();
    do{
        op=this->view.SpecificsMenu(movies);
        if (op != 0){
            this->view.printMovieSpecifics(movies, op);
        }
    }while(op != 0);
}

/*
void Controller::runFindMovie(){
    int op = -1;
    do{
        op=this->view.FindMovie();
        switch(op){
            default:
                break;
        }
    }while(op != 0);
}
*/
/*
void Controller::runUpdateUser(){
    int op = -1;
    do{
        op=this->view.UpdateUser();
        switch(op){
            default:
                break;
        }
    }while(op != 0);
}
*/

