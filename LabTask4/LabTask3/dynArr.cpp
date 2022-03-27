#include "dynArr.h"
#include<iostream>

using namespace std;

dynArr::dynArr()
{
    data = NULL;
    rows = 0, cols = 0;
}
dynArr::dynArr(int rows, int cols)
{
    data = new int*[rows];
	this->rows = rows;
    this->cols = cols;
    for (int i = 0; i < rows; i++)
    {
        data[i] = new int[cols];
    }
}
dynArr::~dynArr()
{
    for(int i=0; i<rows; i++)
    {
        delete [] data[i];
    }
    delete [] data;
}

int dynArr::getValue(int rows, int cols)
{
    return data[rows][cols];
}

void dynArr::setValue(int rows, int cols, int value)
{
    data[rows][cols] = value;
}

bool dynArr::allocate(int rows, int cols)
{
    data = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        data[i] = new int[cols];
    }
}
