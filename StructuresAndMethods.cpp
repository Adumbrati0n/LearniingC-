//Exercise 7.2 - Structures: Have an object of a car

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

// We want to represent a car with 3 properties: Colour, type, no. of doors

struct car{
  //variables
  char* colour;
  char* type;
  int ndoors;

  //methods
  car(char *colour,char* type, int ndoors) //We can create initialize new objects from structure 
  {
  this->colour = colour; 
  this->type = type;
  this->ndoors = ndoors;
  }

  void print_car_object()
  {
  cout << "The car properties:\n-------------------\n";
  cout << "Colour: " << this->colour << "\n";
  cout << "Type: " << this->type << "\n";
  cout << "No. of doors: " << this->ndoors << "\n";
  cout << "\n";
  }

  void del_car_obj()
  {
  free(this);
  }
};

// ->  To access members of a structure through a pointer, use the arrow operator.

int main()
{
  car* car01 = new car((char*)"Red", (char*) "Honda", 4);
  car* car02 = new car((char*) "Black",(char*) "Tesla", 4);
  car* car03 = new car((char*) "Blue",(char*) "Mercedes", 4);
  car01->print_car_object();
  car02->print_car_object();
  car03->print_car_object();
  
  car01->del_car_obj();
  car02->del_car_obj();
  car03->del_car_obj();
  return 0;
}

// warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
// Change to the following warning disappears: char* p = (char*)"abc";  // OK
//Help:
// https://programmerah.com/solved-linux-c-warning-iso-c-forbids-converting-a-string-constant-to-char-wwrite-strings-32544/

