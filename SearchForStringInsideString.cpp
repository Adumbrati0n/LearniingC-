//Exercise 3.3: Search for a string inside another 
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

// we have a string called str01
char str01[] = "The Programmer Mindset: Problem Solving in C++";

// We want to find string inside it
char str_to_search[] = "Solving";

int main()
{
  int search_length = strlen(str_to_search);
  int str01_length = strlen(str01);

  for (int i = 0; i < str01_length - search_length; i++) // - search_length incase there are more S's in string, we want 'Solving' String so we define length
  {
    if (str01[i] == str_to_search[0]) 
    //If str_to_search is matching, find 1st letter, compare the whole word
    {
      bool found = true;
      for (int s = i; s < i + search_length; s++)
      {
        if (str01[s] == str_to_search[s - i]) 
        {
          found = true;
        }
        else // Until one letter doesn't match and break 
        {
          found = false;
          break;
        }
      }

      if (found == true)
      {
        cout << "match from " << i << " to " << i + search_length << "\n";
        cout << &str01[32]; //Print from no.32 in array/string
        break;
      }
    }
  }

  return 0;
}
