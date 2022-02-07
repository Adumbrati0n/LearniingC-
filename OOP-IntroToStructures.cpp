//Exercise 7.1 - Structures: Have an object of a car

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

// We want to represent a car with 3 properties: Colour, type, no. of doors

struct car{
  char* colour;
  char* type;
  int ndoors;
};

car* create_new_car_obj(char *colour,char* type, int ndoors)
{
  car* new_car = (car*)malloc(sizeof(car));
  memset(new_car,0,sizeof(car*)); //Set memoryspace to null
  new_car->colour = colour; // -> Means follow pointer, get first variable of structure
  new_car->type = type;
  new_car->ndoors = ndoors;

  return new_car;
}

// ->  To access members of a structure through a pointer, use the arrow operator.
// void means nothing/no type 
// Function argument: int myFunc(void) -- the function takes nothing.
// Function return value: void myFunc(int) -- the function returns nothing
// Generic data pointer: void* data -- 'data' is a pointer to data of unknown type, and cannot be dereferenced

void print_car_object(car* this_car)
{
  cout << "The car properties:\n-------------------\n";
  cout << "Colour: " << this_car->colour << "\n";
  cout << "Type: " << this_car->type << "\n";
  cout << "No. of doors: " << this_car->ndoors << "\n";
  cout << "\n";
}

void del_car_obj(car* this_car)
{
  free(this_car);
}

int main()
{
  car* car01 = create_new_car_obj((char*)"Red", (char*) "Honda", 4);
  car* car02 = create_new_car_obj((char*) "Black",(char*) "Tesla", 4);
  car* car03 = create_new_car_obj((char*) "Blue",(char*) "Mercedes", 4);
  print_car_object(car01);
  print_car_object(car02);
  print_car_object(car03);

  del_car_obj(car01);
  del_car_obj(car02);
  del_car_obj(car03);
  return 0;
}

// warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
// Change to the following warning disappears: char* p = (char*)"abc";  // OK
//Help:
// https://programmerah.com/solved-linux-c-warning-iso-c-forbids-converting-a-string-constant-to-char-wwrite-strings-32544/

