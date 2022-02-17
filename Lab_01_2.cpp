#include <iostream>
using namespace std;

int main()
{
    int number;
    float fact = 1.0;

    cout << "Enter the positive number: ";
    cin >> number;

    for(int i = 1; i <= number; ++i) {
            fact *= i;
        }
    cout << "Factorial of " << number << " = " << fact;

    return 0;

}

