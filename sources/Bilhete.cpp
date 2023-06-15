//
// Created by andre on 05-06-2023.
//
#include <iostream>
#include <ctime>
#include <chrono>
#include <limits>
//#include "Bilhete.h"

using namespace std;

/*
bool Bilhete::Continue()
{
    char op;
    do{
        cout << "\nTem a certeza que é este o filme que quer assistir? (y/n): ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');//Ignora qualquer \n anterior, caso isto não existisse, qnd se fizesse ENTER, ele saltava para a prox linha sem aceitar y ou Y
        op = cin.get();

        if(op == '\n')
        {
            op = 'y'; // Treat Enter key as "yes"
        }
    }while(op != 'y' && op != 'n' && op != 'Y' && op != 'N');

    if(op == 'y' || op == 'Y' || op == '\n'){
        return true;
    }
    return false;
}

const char* Bilhete::SelectedMovie()
{
    const char* AvailableMovies[] = {"Super Mario Bros. - O Filme\t\t\t(Animação • M6 • 93 min)","Guardiões da Galáxia: Volume 3\t\t(Aventura • M12 • 149min)",
                                     "Homem-Aranha: Através do Aranhaverso\t(Animação • M12 • 140 min)","Velocidade Furiosa X\t\t\t(Ação • M12 • 141 min)"};

    bool movieConfirmed = false;
    int choice;

    while(!movieConfirmed)
    {
        cout << "\nEscolha um filme para assistir:\n\n";
        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << " -  " << AvailableMovies[i] << "\n";
        }

        do {
            cout << "\nDigite o número correspondente ao filme escolhido: ";
            cin >> choice;

            if (choice < 1 || choice > 4) {
                cout << "\n\n******** Opção inválida. Por favor, selecione um número válido. ********\n\n";
            }
        } while (choice < 1 || choice > 4);

        movieConfirmed = Continue();
    }
    return AvailableMovies[choice - 1];
}

int Bilhete::Movie()
{
    int numPeople;

    cout << "\nQuantas pessoas vão: ";
    cin >> numPeople;

    double totalPrice = Price(numPeople);

    cout << "\nFilme Escolhido: " << SelectedMovie() << "\n\n";
    cout << "\nPreço do Bilhete: " << totalPrice << "€\n\n";

    return 1;
}

double Bilhete::Price(int numPeople)
{
    double PricePerPerson = 7.00;
    double totalPrice = numPeople * PricePerPerson;

    return totalPrice;
}

int Bilhete::Room()
{

}

string Bilhete::SessionTime() //vai retornar o tempo da sessao
{

}

string Bilhete::TicketTime() //retorna o tempo atual do computador que está a executar o programa
{
    chrono::system_clock::time_point now = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);
    string timeString = ctime(&currentTime);
    return timeString;
}

int Bilhete::Date()
{
    return 1;
}

int Bilhete::Row()
{



    return 1;
}

int Bilhete::Seat()
{
    return 1;
}

string Bilhete::Ticket()
{
    cout << "Enjoy your movie and come back anytime\n";
    cout << "\n\t" << SelectedMovie() << "\n";
    cout << "\nRoom " << Room() << " / Time: " << SessionTime() << " / Date: " << Date() << "\n";
    cout << "Row: " << Row() << "  Seat: " << Seat() << "\n";
    int numPeople = 0;
    cout << "Price:" << Price((int) numPeople) << "€\n";

    return "";
}


*/


