#include <iostream>
using namespace std;

int isPrime(int n);

int main()
{
   bool prime;
   for(int num = 300; num <= 500; num++) {
      prime = isPrime(num);

      if(prime == true)
         cout<< num <<" is Prime number." << endl;
   }
   return 0;
}

int isPrime(int n) {
   bool prime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n%i == 0) {
         prime = false;
         break;
      }
   }
   return prime;
}
