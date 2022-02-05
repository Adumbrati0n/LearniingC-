// Exercise 5.1: Pointers - Create a dynamic array of words from a sentence
// Important functions to know: malloc, realloc, free, memset, memcopy(dst,src)
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

// We have a sentence called msg
char msg[] = "This is a complete sentence ";

// We want to copy each word to a new allocated memory and print it 

int main() 
{
  int prev_space = 0;
  for (int i = 0; i < strlen(msg); i++)
  {
    if (msg[i] == ' ')
    {
      int length = i - prev_space;
      char* word = (char*)malloc(length); //char* is a pointer to a list of characters, void* means x bytes to a pointer of anything
      memset(word, 0, length); // Set variable 'word', for all values of 0 with bytes of no. length, e.g: length 4 bytes
      memcpy(word, &msg[prev_space], length); 
      //&msg[prev_space] - Get address of last space, you can also try msg + prev_space which will work the same as well, memcpy copies value of num bytes from src to dst e.g: &msg[prev_space] --> word with defined length
      cout << word << "\n";
      prev_space = i + 1; // To skip space
      free(word); //Always remember to free after
    }
  }

  return 0;
}
