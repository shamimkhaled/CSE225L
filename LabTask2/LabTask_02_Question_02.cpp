//if want to run the program, please comment out the #include "Box.h"
//Box.h
#ifndef BOX_H
#define BOX_H

class Box
{
    private:
        double height, width, depth;
    public:
        Box(double, double, double);
        double volume();

};

#endif // BOX_H


//Box.cpp

#include "Box.h"
#include <iostream>

using namespace std;

Box::Box(double height, double width, double depth)
{
    this->height = height;
    this->width = width;
    this->depth = depth;
}

double Box::volume(){

    return height*width*depth;
}

//main.cpp
#include "Box.h"
#include <iostream>

using namespace std;

int main()
{
    Box box = Box(1,3,4);

    cout << "Volume = " << box.volume() << endl;
    return 0;
}


