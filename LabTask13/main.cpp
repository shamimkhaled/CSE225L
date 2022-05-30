//SHAMIM 1813597642
#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
using namespace std;

int main(){
    TreeType<int> treeType;

    if(treeType.IsEmpty())
        cout << "Tree is Empty" << endl;

    treeType.InsertItem(4);
    treeType.InsertItem(9);
    treeType.InsertItem(2);
    treeType.InsertItem(7);
    treeType.InsertItem(3);
    treeType.InsertItem(11);
    treeType.InsertItem(17);
    treeType.InsertItem(0);
    treeType.InsertItem(5);
    treeType.InsertItem(1);

    if(!treeType.IsEmpty())
        cout << "Tree is not Empty" << endl;

    cout << treeType.LengthIs() << endl;

    bool found;
    int item=9;
    treeType.RetrieveItem(item,found);

    if(found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    item=13;
    treeType.RetrieveItem(item,found);

    if(found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    treeType.ResetTree(IN_ORDER);

    bool flag = 0;
    int value;
    while(!flag){
        treeType.GetNextItem(value,IN_ORDER,flag);
        cout << value <<" ";
    }
    cout << endl;

    treeType.ResetTree(PRE_ORDER);
    flag = 0;
    int value1;
    while(!flag){

        treeType.GetNextItem(value1,PRE_ORDER,flag);
        cout << value1 <<" ";
    }
    cout << endl;

    treeType.ResetTree(POST_ORDER);
    flag = 0;
    int value2;
    while(!flag){

        treeType.GetNextItem(value2,POST_ORDER,flag);
        cout << value2 <<" ";
    }
    cout << endl;
    treeType.MakeEmpty();

    if(treeType.IsEmpty())
        cout << "Tree is Empty" << endl;


    treeType.InsertItem(4);
    treeType.InsertItem(1);
    treeType.InsertItem(0);
    treeType.InsertItem(2);
    treeType.InsertItem(3);
    treeType.InsertItem(9);
    treeType.InsertItem(5);
    treeType.InsertItem(7);
    treeType.InsertItem(11);
    treeType.InsertItem(17);



    treeType.ResetTree(PRE_ORDER);

    bool f = 0;
    int value3;
    while(!f)
    {

        treeType.GetNextItem(value3,PRE_ORDER,f);
        cout << value3 <<" ";
    }
    cout << endl;

    return 0;
}
