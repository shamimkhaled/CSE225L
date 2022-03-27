#include "dynArr.h"
#include<iostream>

using namespace std;

template <typename S>
dynArr<S>::dynArr()
{
    data = NULL;
    rows = 0, cols = 0;
}
template <typename S>
dynArr<S>::dynArr(int rows, int cols)
{
    data = new S*[rows];
    this->rows = rows;
    this->cols = cols;
    for (int i = 0; i < rows; i++)
    {
        data[i] = new S[cols];
    }
}
template <typename S>
dynArr<S>::~dynArr()
{
    for(int i=0; i<rows; i++)
    {
        delete [] data[i];
    }
    delete [] data;
}

template <typename S>
S dynArr<S>::getValue(int rows, int cols)
{
    return data[rows][cols];
}
template <typename S>
void dynArr<S>::setValue(int rows, int cols, S value)
{
    data[rows][cols] = value;
}



