//
// Created by andre on 10-06-2023.
//

#include <iostream>
#include <string>
#include <tuple>
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
        op=this->view.WelcomeScreen();
        switch(op){
            case 1:
                runLogin();
                break;
            case 2: //runCreate();
                cout << "Escolhida opção 2" << endl;
                break;
            default:
                break;
        }
    }while(op!=0);
}


void Controller::runLogin() {
    bool ok = false;

    string user = Utils::getString("\nEnter your username: ");
    string pwd = Utils::getString("Enter your password: ");

    UserContainer &container = this->model.getUserContainer();
      User obj("user01", "email", "user01");
      container.add(obj);
    User *ptr = container.get(user);

    if (ptr != NULL) {
        ok = ptr->validPwd(pwd);
    }
    if (ok){
        //Login accepted
        runCinema();
    }else{
        // Login rejected
        cout << "\n\n**User or password invalid**\n\n";
    }
}


void Controller::runCinema(){
    int op = -1;
    do{
        cout<<"\n\n********** Main Menu **********\n";
        op=this->view.menuCinema();
        switch(op){
            case 1:
                //runMovies();
                cout << "Escolhida opção 1" << endl;
                break;
            case 2: //runCreate();

                cout << "Escolhida opção 2" << endl;
                break;
            default:
                break;
        }
    }while(op != 0);
}
