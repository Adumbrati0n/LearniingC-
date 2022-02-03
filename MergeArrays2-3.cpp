#include <iostream>
#include <string>
#include <algorithm>
//Exercise 2.3: 2 arrays - Merge the 2 arrays exchangably 
using namespace std;

//Let's say we have 2 arrays: a1 and a2
int a1[9] = {22,33,91,55,66,77,88,99,11};
int a2[9] = {12,23,34,45,56,67,66,89,91};

// and we need to merge like:
// a1[0], a2[0], a1[1], a2[1], a1[1], a2[2], etc.

int main()
{
  int a_new[18];

  for (int i = 0; i < 18; i++)
  {
    if ( i % 2 == 0) // If even no.
    {
      a_new[i] = a1[i/2];
    }
    else if (i % 2 == 1) //If odd no.
    {
      a_new[i] = a2[i/2];
    }
  }

  cout << "The result array: ";
  for (int i = 0; i < 18; i ++)
  {
    cout << a_new[i] << " ";
  }

  return 0;
}
