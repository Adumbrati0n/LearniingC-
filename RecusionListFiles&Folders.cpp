//Exercise 4.2: Recursion - List all files in a directory and its subdirectories

// Recursion Functions to know: string (any text like dir names), opendir, readdir, closedir, DIR and dirent structure[entry inside a file/folder], strcmp

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <dirent.h> 
// https://pubs.opengroup.org/onlinepubs/7908799/xsh/dirent.h.html - dirent.h info
using namespace std;

// We have a directory called dirname
string dirname = "/usr/"; // This is a directory on linux which works with online shells, we can also try with C:\\ for windows

int list_dir(string dirname) //Create new function listdir
{
  DIR* dir;
  dirent* entry;

  dir = opendir(dirname.c_str()); //Convert string (the string dirname) to char*, need constant char or it wont work, .c_str() is a func that allows us to use char*
  if (dir != NULL) // If dir doesn't return error
  {
    do
    {
      entry = readdir(dir); // readdir doesn't read all dir, only 1st entry, every time we call it we will get the next entry/item/folder
      if (entry == NULL) //If there are no other files/folders
        break;

      string entryname = entry->d_name;
      // entry is special var type which includes small var like entry id, file name, file extension string, true/false/bool etc., more info in data struct sesh, d_name is name of entry in struct dirent in dirent.h header
      if(entryname == "." || entryname == "..")
        continue;

      cout << dirname + entryname << "\n";
      //list_dir(dirname + entryname + "/"); //List all Files in Folders from /usr, you can uncomment this to list all files/folders within /usr
    } 
    while(true);
  }
}

int main()
{
  list_dir(dirname);
  return 0;
}


// Example Output:
  // /usr/share
  // /usr/sbin
  // /usr/bin
  // /usr/lib
  // /usr/lib32
  // /usr/local
  // /usr/libx32
  // /usr/include
  // /usr/games
  // /usr/src
  // /usr/lib64
