//if want to run the program, please comment out the header included file and #ifndef, #define file
//BankCustomers.h

#ifndef BANKCUSTOMERS_H
#define BANKCUSTOMERS_H
#include <iostream>
#include <string>
using namespace std;

class BankCustomers
{
//private:
public:
    string first_name;
    string last_name;

//public:
    //BankCustomers(string, string);

};

//BankCustomers.cpp
//#include "BankCustomers.h"

/*BankCustomers::BankCustomers(string first_name, string last_name)
{
    this->first_name = first_name;
    this->last_name = last_name;
}*/

//BankAccounts.h

//#ifndef BANKACCOUNTS_H
//#define BANKACCOUNTS_H
//#include "BankCustomers.h"
#include <iostream>
#include <string>
using namespace std;

class BankAccounts
{
public:
    BankCustomers cust;
    int balance;

//public:
   // BankAccounts(BankCustomers, int);

};

//BankAccounts.cpp
//#include "BankAccounts.h"
/*BankAccounts::BankAccounts(BankCustomers cust, int balance)
{
    this->cust = cust;
    this->balance = balance;
}*/

//main.cpp

#include <iostream>
#include "BankAccounts.h"
#include "BankCustomers.h"
#include <string>
using namespace std;

int main()
{
    //BankCustomers customer = BankCustomers("A", "B");
    BankCustomers customer;
    customer.first_name = "Shamim";
    customer.last_name = "Khaled";

    //Account 1
    BankAccounts account1;
    account1.cust = customer;
    account1.balance = 10000;
    cout << "Account - 1: " << account1.cust.first_name << " " << account1.cust.last_name << " " << account1.balance << endl;

    //Account 2
    BankAccounts account2;
    account2.cust = customer;
    account2.balance = 4000;
    cout << "Account - 2: " << account2.cust.first_name << " " << account2.cust.last_name << " " << account2.balance;

    return 0;
}
