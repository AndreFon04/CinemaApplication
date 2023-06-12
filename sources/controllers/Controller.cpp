//
// Created by andre on 10-06-2023.
//

#include <iostream>
#include <string>
#include <tuple>
#include "controllers/Controller.h"
#include "views/Utils.h"

using namespace std;

Controller::Controller(Cinema& cinema){
    this->model = cinema;
}

void Controller::run(){
    int op = -1;
    do{
        op=this->view.WelcomeScreen();
        switch(op){
            case 1: //runLogin();
                cout << "Escolhida opção 1" << endl;
                break;
            case 2: //runCreate();
                cout << "Escolhida opção 2" << endl;
                break;
            default:
                break;
        }
    }while(op!=0);
}

/*
void Controller::runLogin() {
    int op = -1;
    do {
        op = this->view.menuWelcome();

        switch (op) {
            case 1: {
                Student student = this->studentView.getStudent();
                StudentContainer &container = this->model.getStudentContainer();
                container.add(student);
            }

        }
    }
}*/