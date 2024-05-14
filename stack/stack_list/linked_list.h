#include <stdio.h>
#include <stdlib.h>

//Define a structure for the node
struct node{
    int ele;
    struct node *next;
};

//Define a structure for the list
struct list{
    struct node *head;
    int count;
};

//Define a pointer to the structure
typedef struct list *LIST;
typedef struct node *NODE;

//Function to create a new list and new node
LIST createNewList();
NODE createNewNode(int value);

//Function to print the list
void printList(LIST myList);

//Function to insert a new node at the beginning of the list
void insertFirst(LIST myList, int value);

//Function to remove the first node from the list
void removeFirst(LIST myList);

