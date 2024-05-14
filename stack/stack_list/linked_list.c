#include "linked_list.h"

LIST createNewList(){
    LIST myList = (LIST)malloc(sizeof(struct list));
    myList->head = NULL;
    myList->count = 0;
    return myList;
}

NODE createNewNode(int value){
    NODE newNode = (NODE)malloc(sizeof(struct node));
    newNode->ele = value;
    newNode->next = NULL;
    return newNode;
}

void printList(LIST myList){
    NODE temp = myList->head;
    printf("List: \n");
    printf("[HEAD]-> ");
    while(temp != NULL){
        printf("-> %d ", temp->ele);
        temp = temp->next;
    }
    printf(" [NULL]");
    printf("\n");
}

void insertFirst(LIST myList, int value){
    NODE newNode = createNewNode(value);
    newNode->next = myList->head;
    myList->head = newNode;
    myList->count++;    
}

void removeFirst(LIST myList){
    if(myList->head == NULL){
        printf("List is empty\n");
        return;
    }
    NODE temp = myList->head;
    myList->head = myList->head->next;
    free(temp);
    myList->count--;
}   