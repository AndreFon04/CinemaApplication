//
// Created by andre on 10-06-2023.
//

#ifndef CINEMAAPPLICATION_MOVIE_H
#define CINEMAAPPLICATION_MOVIE_H

#include <string>

using namespace std;

class Movie
{
private:
    string title;
    string description;
    string genre;
    int duration;
    int minimalAge;
public:
    Movie(const string& title, const string& description, const string& genre, int duration, int minimalAge);
    string getTitle();
    string getDescription();
    string getGenre();
    int getDuration();
    int getMinimalAge();
    void setTitle(const string& title);
    void setDescription(const string& description);
    void setGenre(const string& genre);
    void setDuration(int duration);
    void setMinimalAge(int minimalAge);
};

#endif //CINEMAAPPLICATION_MOVIE_H
