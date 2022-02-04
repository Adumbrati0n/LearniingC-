//Exercise 3.5: Encrypt string using add
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

// We have a msg called
char msg[] = "This is a secret message: You See Me Oh No!";

// We need to encrypt using this key
char key = 0x005; //char as it encrypts one byte/char at once, encrypt every char by 5
// You can also check ASCII Table to see each char moving up by 5, for example ' ' moved up by 5 is %
// https://www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-61.php for ASCII table

int main() 
{
  for (int i = 0; i < strlen(msg); i++)
    if (msg[i] != ' ')
    msg[i] += key;

  cout << msg << "\n";
  return 0;
}
