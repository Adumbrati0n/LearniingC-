//Exercise 3.4: Divide a path into every folder/file by "\" 
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

// We have a path called path .. "\\" is interpreted to "\" in C++
char path[] = "C:\\Users\\Administrator\\Appdata\\Chrome\\info.log";

// We need to print each folder/file in path

int main() 
{
  int pos[50] = {0}; //50 or more or strlen(path) 
  //Create an array pos with array length no more than the string length of path
  int pos_index = 0;
  pos[pos_index] = 0;
  pos_index++;


  for (int i = 0; i < strlen(path); i++)
  {
    if (path[i] == '\\')    //If we find '\\'
    {
      pos[pos_index] = i; //save positions of '\\' into pos_index
      //cout << pos[pos_index] << "     " << pos_index << "\n"; // This cout prints '\\' positions in path[] and shows pos_index
      pos_index++;
    }
  }
  pos[pos_index] = strlen(path);
  pos_index++;

  int length = pos_index;
  //cout << length << "\n"; // 7 slashes from beginning to end

  for (int v = 0; v < pos[1]; v++)
    cout << path[v]; // C:
    cout << "\n";

  for (int i = 1; i < length - 1; i++)
  {
    for (int v = pos[i] + 1; v < pos[i + 1]; v++)
      cout << path[v]; //Users,Administrator,Appdata,Chrome,info.log
      
    cout << "\n"; 
  }


  return 0;
}
