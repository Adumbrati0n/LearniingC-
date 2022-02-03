#include <iostream>
#include <string>
//Exercise 1.3: Delete item from array given the value
using namespace std;

//Let's say we have an array:a1 with 9 items
int a1[9] = {22,33,44,55,66,77,88,99,11};

// we want to delete an item with the value of 66
int item = 66;

int main()
{
  int a_new[8]; //create new array with 8 items
  int pos = 0;
  for (int i = 0; i < 9; i++)
  {
    if (a1[i] == item)
    {
      pos = i; // position of item we will want to del
      // If there is a repeat of item it will get the last position of item 
      break; // exit loop
    }
  }
  
  // copy the items before the pos of the new item (from 0 to pos)
  for (int i = 0; i < pos; i++)
  {
    a_new[i] = a1[i];
  }

  // lets skip this item and copy from pos + 1
  for (int i = pos + 1; i < 9; i++)
  {
    a_new[i-1] = a1[i];
  }
  
 // now we print both arrays to compare
 cout << "array a1: " << "\n";
 for (int i = 0; i < 9; i++)
 {
   cout << a1[i] << " ";
 }
 cout << "\n";

 cout << "array a_new: " << "\n";
 for (int i = 0; i < 8; i++)
 {
   cout << a_new[i] << " ";
 }

 cout << "\n";
 cout << "Item: " << a1[pos] << " is missing!";

 return 0;
}
