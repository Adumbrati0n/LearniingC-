//Exercise 3.2: Trim a string (Remove the start and ending spaces)
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

// we have a string called str01
char str01[] = "   Hello World        ";

// We need to trim it from spaces

int main()
{
  int start_pos = 0; //Get start pos to end of space
  int end_pos = 0; //Get end pos to end of space

  for (int i = 0; i < strlen(str01); i++)
  {
    if (str01[i] != ' ') //If any letter you find is not a space
    // " " - array of 2 items ' '- a variable
    {
      start_pos = i; //start pos will be i e.g: 3
      break;
    }
  }

  for (int i = strlen(str01) - 1; i > 0; i--)
  {
    //cout << i << "\n";
    if (str01[i] != ' ') //If any letter you find is not a space
    // " " - array of 2 items ' '- a variable
    {
      end_pos = i; //end pos will be i e.g: 13
      break;
    }
  }


cout << "------" << "\n";

  cout << start_pos << "\n"; // Print start position of spaces to letter 3 
  cout << end_pos << "\n"; //Print end position of spaces to letter 13

  char str_new[strlen(str01)]; 
  for (int i = start_pos; i <= end_pos; i++)
  {
    str_new[i - start_pos] = str01[i];
  }
  str_new[end_pos - start_pos + 1] = 0; //ensure terminate string in correct way

  cout << str_new << "\n"; //Print the trimmed string


  return 0;
}
