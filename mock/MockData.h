//
// Created by andre on 10-06-2023.
//

#ifndef CINEMAAPPLICATION_MOCKDATA_H
#define CINEMAAPPLICATION_MOCKDATA_H

#include <ctime>
#include <string>
#include <vector>

#include "Cinema.h"

using namespace std;

class MockData{
private:
/*  const vector<vector<string>> initialUsers = {
            {"admin", "admin@cineclube.pt", "admin"},
            {"user01", "user01@cineclube.pt", "user01"}
    };
*/
    const vector<User> initialUsers =
    {
            {"admin", "admin@cineclubeisep.pt", "admin"},
            {"user01", "user01@cineclubeisep.pt", "user01"},
            {"u", "u@cineclubeisep.pt", "u"}

    };

    const vector<Movie> initialMovies =
    {
            {"Super Mario Bros. - O Filme", "Da Nintendo e Illumination, chega a mais aguardada animação baseada no universo Super Mario Bros. O mundo conheceu Mario pela primeira vez no videojogo de 1981, Donkey Kong, e rapidamente se apaixonou pela icónica personagem que veio a acompanhar o crescimento de gerações desde a década de 80. Depois de mais de 200 videojogos relacionados com o franchise Mario, incluindo o célebre Super Mario Bros., de 1985, e de ter assegurado o título de franchise de videojogo mais vendido de sempre, o adorado personagem vermelho chega pela primeira vez ao grande ecrã. ", "Animação", 93, 6},
            {"Guardiões da Galáxia: Volume 3", "O nosso amado grupo de desajustados está bastante diferente nos dias de hoje. Peter Quill, que ainda está a recuperar da perda de Gamora, tem que reunir a sua equipa para defender o universo e proteger um dos seus. Uma missão que, se não for concluída com sucesso, pode levar ao fim dos Guardiões como os conhecemos. Um filme de James Gunn. ", "Aventura", 149, 12},
            {"Homem-Aranha: Através do Aranhaverso", "Miles Morales regressa para o próximo capítulo da saga Universo-Aranha, vencedora de um Óscar. Uma aventura épica que transportará o amigo da vizinhança de Brooklyn, Homem-Aranha, através do Multiverso para unir forças com Gwen Stacy e uma nova equipa de Pessoas-Aranha. Miles, Gwen e esta equipa irão enfrentar um vilão muito mais poderoso do que qualquer outro antes encontrado. ", "Animação", 140, 12},

    };

    vector<Movie*> ptrMovies = {NULL, NULL, NULL};

    const vector<vector<vector<int>>> unavailableSeats = {
            {{0,7},{0,8},{1,7},{1,8},{2,7},{2,8},{3,7},{3,8},{4,7},{4,8},{5,7},{5,8},{6,7},{6,8},{7,7},{7,8},{1,16},{1,15},{2,16},{2,15},{3,16},{3,15},{4,16},{4,15},{5,16},{5,15}},
            {{1,7},{1,8},{2,7},{2,8},{3,7},{3,8},{4,7},{4,8},{5,7},{5,8},{6,7},{6,8},{1,2},{1,1},{2,2},{2,1},{3,2},{3,1},{4,2},{4,1}},
            {{0,8},{0,9},{0,18},{0,19},{1,8},{1,9},{1,18},{1,19},{2,8},{2,9},{2,18},{2,19},{3,8},{3,9},{3,18},{3,19},{4,8},{4,9},{4,18},{4,19},{5,0},{5,1},{5,2},{5,3},{5,4},{5,5},{5,6},{5,7},{5,8},{5,9},{5,10},{5,11},{5,12},{5,13},{5,14},{5,15},{5,16},{5,17},{5,18},{5,19},{5,20},{5,21},{5,22},{5,23},{5,24},{5,25},{5,26},{5,27},{6,0},{6,1},{6,2},{6,3},{6,4},{6,5},{6,6},{6,7},{6,8},{6,9},{6,10},{6,11},{6,12},{6,13},{6,14},{6,15},{6,16},{6,17},{6,18},{6,19},{6,20},{6,21},{6,22},{6,23},{6,24},{6,25},{6,26},{6,27},{7,8},{7,9},{7,18},{7,19},{8,8},{8,9},{8,18},{8,19},{9,8},{9,9},{9,18},{9,19},{10,8},{10,9},{10,18},{10,19},{11,8},{11,9},{11,18},{11,19},{12,8},{12,9},{12,18},{12,19},{13,8},{13,9},{13,18},{13,19},{14,8},{14,9},{14,18},{14,19},{15,8},{15,9},{15,18},{15,19},{7,0},{7,1},{7,2},{8,0},{8,1},{8,2},{9,0},{9,1},{9,2},{10,0},{10,1},{10,2}}
    };




    void insertUsers(UserContainer& container);
    void insertMovies(MovieContainer& container);
    void insertShowtimes(ShowtimeContainer& container);



public:
    void generateData(Cinema& cinema);

};



#endif //CINEMAAPPLICATION_MOCKDATA_H
