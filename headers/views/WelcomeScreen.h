//
// Created by andre on 10-06-2023.
//

#ifndef CINEMAAPPLICATION_WELCOMESCREEN_H
#define CINEMAAPPLICATION_WELCOMESCREEN_H

#include <iostream>
#include <cstring>

using namespace std;


class WelcomeScreen
{
private:
    WelcomeScreen Welcome();

public:
    static char Login();
    static string LoginAdmin();
    static string createClient();
    static string createAdmin();
    static string changeUsername();
};






#endif //CINEMAAPPLICATION_WELCOMESCREEN_H
