#include <iostream>
#include <array>
#include "Room.h"

void Room::CreateRoom() {
    int i, j;

    cout << "How many rows would you like this room to have: " << endl;
    cin >> R;
    cout << "How many columns would you like this room to have: " << endl;
    cin >> C;


    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            room[i][j] = 'O';
        }
    }
    cout << "  ";
    for(i = 0; i < C; i++) {
        cout << alphabet[i] << " ";
    }
    cout << "\n";

    for (i = 0; i < R; i++) {
        cout << i+1 << " ";
        for (j = 0; j < C; j++) {
            cout << room[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "    ";
    for(i = 0; i < (C-2); i++ ) {
        cout << "--";
    }
}
