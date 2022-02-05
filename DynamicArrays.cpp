// Exercise 5.2: Pointers - Create a dynamic array of words from a sentence
// Important functions to know: malloc, realloc, free, memset, memcopy(dst,src)
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

// We have a sentence called msg
char msg[] = "This is a complete sentence ";

// We want to save it in a dynamic array of pointers of char* (strings):
char** array; //char* means pointer to a string and another * means a pointer to to list of pointers of strings
int arr_length = 0;


int main() 
{
  int prev_space = 0;
  for (int i = 0; i < strlen(msg); i++)
  {
    if (msg[i] == ' ')
    {
      int length = i - prev_space + 1;
      char* word = (char*)malloc(length); 
      memset(word, 0, length); 
      memcpy(word, msg + prev_space, length - 1); 
      //cout << word << "\n";
      prev_space = i + 1; 

      if (arr_length == 0) // If array is empty
      {
        array = (char**)malloc(sizeof(char*));
        // Using cout << sizeof(char*) << "\n"; will show it will be 8 bytes, Other inputs: int is 4 bytes, char is 1 byte 
        array[arr_length] = word;
      }
      else 
      {
        array = (char**)realloc(array, sizeof(char*) * arr_length + 1);
        array[arr_length] = word; //Add new item into array

      }
      arr_length++;

    }
  }

  for (int i = 0; i < arr_length; i++)
    cout << (int*)array[i] << "\n";

  return 0;
}
