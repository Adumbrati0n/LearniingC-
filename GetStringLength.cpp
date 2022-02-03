//Exercise 3.2: Get the string length
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

// we have a string called str01
char str01[] = "Xerath is an Ascended Magus of ancient Shurima, a being of arcane energy writhing in the broken shards of a magical sarcophagus. For millennia, he was trapped beneath the desert sands, but the rise of Shurima freed him from his ancient prison. Driven insane with power, he now seeks to take what he believes is rightfully his and replace the upstart civilizations of the world with one fashioned in his image";

// We want to get the string length of it

int main() 
{
  int length = 0;
  int i = 0;

  do    //for (int i = 0; i < 1000; i++) //This method works but isn't         as good, do/while loop is better
  {
    if (str01[i] == 0) // If string reaches null byte
    {
      length = i;
      break; //Break out otherwise it will be stuck at 999
    }
    i++; //Increment for each letter
  }

  while(true); // Could also do 1 == 1
  cout << strlen(str01); // strlen from string.h
  return 0;  
}


//do {
          // code block to be executed
//    }
//while (condition);
