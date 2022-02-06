//Exercise 6.1 - Lists: Create a Linked list

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

struct item //Create structure item with val and pointer to next item
{
  int value;
  item* next; //Pointer to next variable item
};

item* create_list(int first_value) //create a func for first item, item* to return pointer to 1st pointer we create, create_list to take a value
{
  item* i;
  i = (item*)malloc(sizeof(item)); //allocate an item
  memset(i,0,sizeof(item)); //set it with 0 so its all empty
  i->value = first_value;
  return i; //return address of newly allocated item
}

item* insert_in_list(item* prev_item, int value) //Create a func  insert_in_list which takes pointer of first_item and the value we want to add, link it to previous item
{
  item* i;
  i = (item*)malloc(sizeof(item)); 
  memset(i,0,sizeof(item)); 
  i->value = value;
  prev_item->next = i; // Take first item and in 'next' saves pointer of next item 
  return i; 
}

int print_items(item* list)
{
  item* cur_item = list;
  cout << "The Linked List is: " << "\n";

  while (cur_item != NULL)
  {
    cout << cur_item->value << "\n";
    cur_item = cur_item->next; //Go to next item if its not null
  }

  cout << "-----------" << "\n";
}

int main() 
{
  item* list = create_list(50); //Create list with new item 50
  item* i2 = insert_in_list(list, 30); // create i2 as 2nd item 30, link it to first item
  item* i3 = insert_in_list(i2,45); // Create new item 45 and link it to prev item i2
  item* i = insert_in_list(i3,76); //Create 4th item 76 and link it to prev item i3
  i = insert_in_list(i2,48); //Create new item 48 which we insert between i2 and i3
  i->next = i3;
  print_items(list);
  return 0;
}
