#include <iostream>
#include <string>
//Exercise 1.1: Insert item into array
using namespace std;

//Let's say we have an array:a1 with 9 items
int a1[9] = {22,33,44,55,66,77,88,99,11};

// we want to insert an item "43" into array a1
int item = 43;
int pos = 4; 
//Actually position 5 as we start from 0, pos means position

int main()
{
  int a_new[10];
  
  for (int i = 0; i < 4; i++) // item no. 4 is 66
  {
    a_new[i] = a1[i]; //Make item no.1-4 same for new array

  }

  a_new[pos] = item; //43 item in new position 4
  for (int i = 4; i < 9; i++) //for item no.5-9 increment position
  {
    a_new[i+1] = a1[i];
    // item no.4 will be item 5, item 5 will be item 6 etc.
  }
  
  cout << "array a1: ";
  for (int i = 0; i < 9; i++)
  {
    cout << a1[i] << " ";
  }

  cout << "\n";
  
  cout << "array a_new: ";
  for (int i = 0; i < 10; i++)
  {
    cout << a_new[i] << " ";
  }


  return 0;
}
