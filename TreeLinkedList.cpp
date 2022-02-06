//Exercise 6.2 - Trees: Create a Tree Linked list

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

struct item //Create structure item with val and pointer to next item
{
  int value;
  item* childlist;
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

item* insert_child_list(item* parent_item, int value) 
{
  item* i;
  i = (item*)malloc(sizeof(item)); 
  memset(i,0,sizeof(item)); 
  i->value = value;
  parent_item->childlist = i; //Create a new item, set the value of it, save it as a child
  return i; 
}

int print_items(item* list)
{
  item* cur_item = list;
  cout << "The Linked List is: " << "\n";

  while (cur_item != NULL)
  {
    cout << cur_item->value << "\n";
    if (cur_item->childlist != NULL)
      print_items(cur_item-> childlist);
    cur_item = cur_item->next; //Go to next item if its not null
  }

  cout << "-----------" << "\n";
  return 0;
}

int main() 
{
  item* list = create_list(50); 
  item* i = insert_in_list(list, 40); 
  item* child_i = insert_child_list(i, 401); //The start of children of 40
  child_i = insert_in_list(child_i, 402);
  child_i = insert_in_list(child_i, 404);
  i = insert_in_list(i,45);
  child_i = insert_child_list(i, 451); 
  child_i = insert_in_list(child_i, 452);
  child_i = insert_in_list(child_i, 454);
  i = insert_in_list(i,71);
  print_items(list);
  return 0;
}
