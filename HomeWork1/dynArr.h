#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
#include<iostream>

using namespace std;

template <typename S>
class dynArr
{
private:
    S **data;
    int rows, cols;
public:
    dynArr();
    dynArr(int, int);
    ~dynArr();
    void setValue(int, int, S);
    S getValue(int, int);
    //bool allocate(int, int);
};

#endif // DYNARR_H_INCLUDED
