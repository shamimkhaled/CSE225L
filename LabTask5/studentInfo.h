#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
#include<string>
#include<iostream>

using namespace std;

class studentInfo
{
private:
    int id;
    string name;
    double cgpa;
public:
    studentInfo();
    studentInfo(int, string, double);
    studentInfo(int);
    bool operator ==(studentInfo s);
    bool operator !=(studentInfo s);
    friend ostream& operator << (ostream&, studentInfo&);

};

#endif // STUDENTINFO_H_INCLUDED
