// Sorting is fast in C++ and uses a fast algorithm, used for fast comparing
#include <iostream>
#include <string>
#include <algorithm>
//Exercise 2.2: 2 arrays - Get the common items between the 2 arrays
using namespace std;

//Let's say we have 2 arrays: a1 and a2
int a1[9] = {22,33,91,55,66,77,88,99,11};
int a2[9] = {12,23,34,45,56,67,66,89,91};

int maximum = 9 + 9;
// we need to get the common items in them


int main() 
{
  int a_new[9]; //create a new array for common items
  int new_index = 0;
  

  sort(a1, a1 + 9);
  sort(a2, a2 + 9);
  int i = 0, v = 0;


  for (int m = 0; m < maximum; m++)
  {
    if (a1[i] == a2[v]) //Compare 2 items, if they are equal
    {
      a_new[new_index] = a1[i];
      new_index++;
      i++;
      v++;
    }
    else if (a1[i] > a2[v])
    {
      v++;
      if (v == 9)
            break;
    }
    else if (a1[i] < a2[v])
    {
      i++;
      if (i == 9)
            break;
    }
  }
  // the number of common items
  int length = new_index;

  cout << "Number of common items: " << length << "\n";

  // Now lets print new array
  cout << "Common items: ";
  for (int i = 0; i < length; i++)
  {
    cout << a_new[i] << " ";
  }


  return 0;
}
