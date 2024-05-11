#include "linked_list.h"

LIST createNewList(){
	LIST myList; //equivalent to struct linkedList * myList;
	myList =(LIST)malloc(sizeof(struct linked_list));
	myList->head=NULL;
	myList->count=0;
	return myList;
}

NODE createNewNode(int value){
	NODE myNode;
	myNode=(NODE)malloc(sizeof(struct node));
	myNode->ele=value;
	myNode->next=NULL;
	return myNode;
}

void insertFirst(NODE newNode, LIST myList){
	
	if(myList->head==NULL){
		myList->head=newNode;
		myList->count++;
		newNode->next=NULL;
	}
	else{
		NODE temp=myList->head;
		myList->head=newNode;
		newNode->next=temp;
		myList->count++;
	}
	return;
}

void printList(LIST myList){
	NODE temp=myList->head;
	printf("[HEAD] -> ");
	while(temp!=NULL){
		printf("%d -> ",temp->ele);
		temp=temp->next;
	}
	printf(" [NULL]\n");
	return;
}
