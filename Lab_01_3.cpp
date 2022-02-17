# include <iostream>
using namespace std;

int main() {

  char option;
  float number1, number2;

  cout << "Enter operator: + or - or *: ";
  cin >> option;

  cout << "Enter the two numbers: ";
  cin >> number1 >> number2;

  switch(option) {

    case '+':
      cout << "Result is: " << number1 + number2;
      break;

    case '-':
      cout << "Result is: " << number1 - number2;
      break;

    case '*':
      cout << "Result is: " << number1 * number2;
      break;

    default:
      cout << "Error! you enter invalid number.";
      break;
  }

  return 0;
}
