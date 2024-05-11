//Author: Madhur Thareja
//This file contains the header files and the function prototypes for the linked list program


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//define the structure of the linked list

typedef struct node *NODE;
struct node
{
	int ele;
	NODE *next;
};

//define a structure for the the header node of the linked list which stores the address of the first node

typedef struct linked_list *LIST;
struct linked_list{
	int count;
	NODE head;
};

//funtion prototypes

LIST createNewList();
NODE createNewNode(int ele);
void printList(LIST list);
void insertFirst(NODE n1, LIST l1);
void insertEnd(NODE n1, LIST l1);
void deleteFirst(LIST l1);
