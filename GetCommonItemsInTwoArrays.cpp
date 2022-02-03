#include <iostream>
#include <string>
//Exercise 2.1: 2 arrays - Get the common items between the 2 arrays
using namespace std;

//Let's say we have 2 arrays: a1 and a2
int a1[9] = {22,33,91,55,66,77,88,99,11};
int a2[9] = {12,23,34,45,56,67,66,89,91};


// we want to get common items between them, loop to find items, use loop within a loop

int main() 
{
  int a_common[9]; // Create array for max 9 common items between 2 arrays
  int new_index = 0;
  for (int i = 0; i < 9; i++)
  {
    for (int v = 0; v < 9; v++)
    {
      if (a1[i] == a2[v])
      {
        a_common[new_index] = a1[i];
        cout << a1[i] << "  " << new_index << "\n";
        new_index++; //Shift index with 1 so next time he finds next item
      }
    }
  }

 
 int NumberOf_common_items = new_index;
 cout << "No. of common items: " << NumberOf_common_items << "\n";

 cout << "Common Items between arrays: ";
 for (int i = 0; i < NumberOf_common_items; i++)
 {
   cout << a_common[i] << " ";
 }
 return 0;
}
