#include <iostream>
#include <stdio.h>
//If we list all the natural numbers < 10 that are multiples of 3 or 5, we get 3,5,6 and 9. The sum of these multiples are 23. 
//Find the sum of all multiples of 3 or 5 below 1000.

using namespace std; 
//Removes need to use std::etc. every time

int main() {
  //save sum of all numbers
  int sum = 0;

  // all numbers < 1000, we skip 0 to avoid 0 modulus 3-0
  for (int i = 1; i < 1000; i++)
  {
    // To see if a no. is divisible by another no. we use % - modulus
    // If modulus eq 0, no. is divisible
    if (i % 3 == 0 || i % 5 == 0)
    sum+= i;
  }

  cout << sum << "\n";
  return 0;
}
