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

void insertEnd(NODE newNode, LIST myList){
	if(myList->head==NULL){
		myList->head=newNode;
		myList->count++;
		newNode->next=NULL;
	}
	else{
		NODE temp=myList->head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->next=NULL;
		myList->count++;
	}
	return;
}

void deleteFirst(LIST myList){
	if(myList->head==NULL){
		printf("List is empty\n");
	}
	else{
		NODE temp=myList->head;
		myList->head=temp->next;
		free(temp);
		myList->count--;
	}
	return;
}

void deleteEnd(LIST myList){
	if(myList->head==NULL){
		printf("List is empty\n");
	}
	else{
		NODE temp=myList->head;
		NODE prev=temp;
		while(temp->next!=NULL){
			prev=temp;
			temp=temp->next;
		}
		prev->next=NULL;
		free(temp);
		myList->count--;
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
