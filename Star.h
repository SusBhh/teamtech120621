#pragma once
#include <string>
#include <iostream>

using namespace std;

class Star {
    int num;
public:
    //default constructor
    Star();
    string build();
    void printStar();
};

Star::Star() {
    num = 3;
}

Star::Star(int num) {
    this.num = num;
}

string Star::build()
{
    
}
}