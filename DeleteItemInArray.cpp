#include <iostream>
#include <string>
//Exercise 1.2: Delete item from array
using namespace std;

//Let's say we have an array:a1 with 9 items
int a1[9] = {22,33,44,55,66,77,88,99,11};

// we want to delete an item with position 5, 66
int pos = 4; 
//Actually position 5 as we start from 0, pos means position

int main()
{
 int a_new[8]; //Create new array of 8
 for (int i = 0; i < 4; i++)
 {
   a_new[i] = a1[i]; // items below 66 stay same
 }
 
 for (int i = 5; i < 9; i++)
 {
   a_new[i-1] = a1[i]; //items above 66 move one below 
 }
 
 cout << a1[4] << "\n"; // original position 5 in array, 66
 cout << a_new[4] << "\n"; // position 5 should be now 77

 return 0;
}
