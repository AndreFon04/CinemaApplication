#ifndef FIRSTPROJECT_ROOM_H
#define FIRSTPROJECT_ROOM_H

#include <array>
using namespace std;

class Room {
public:
    int R; //rows
    int C; //columns
    int M; //middle of the room
    char room[20][20];
    char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
            'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    void CreateRoom();
};
#endif //FIRSTPROJECT_ROOM_H
