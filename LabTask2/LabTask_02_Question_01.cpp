//if want to run the program, please comment out the #include "Students.h"
//Students.h
#ifndef STUDENTS_H
#define STUDENTS_H
#include <iostream>
#include <string>
using namespace std;

class Students
{
private:
    string first_name;
    string last_name;
    int class_year;
    string major;
public:
    Students(string, string, int, string);
    void print();
};

#endif // STUDENTS_H

//Students.cpp
#include "Students.h"

Students::Students(string first_name, string last_name, int class_year, string major)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->class_year = class_year;
    this->major = major;
}

void Students::print()
  {
      cout << "" << this->first_name << " " << this->last_name << " " << this->class_year << " " << this->major << endl;
  }

//main.cpp
#include <iostream>
#include <string>
#include "Students.h"
using namespace std;

int main()
{
    Students s1 = Students("Shamim", "Khaled", 2022, "CSE" );
    Students s2 = Students("A", "B", 2021, "EEE" );
    s1.print();
    s2.print();
    return 0;
}


