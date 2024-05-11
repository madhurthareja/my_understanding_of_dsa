//Author: Madhur Thareja
//Week: 2

#include "linked_list.h"

int main(){
	
	//creating a new list
	LIST l1=createNewList(); 
	
	//creating 10 new nodes
	NODE n1=createNewNode(10);
	NODE n2=createNewNode(20);
	NODE n3=createNewNode(30);
	NODE n4=createNewNode(40);
	NODE n5=createNewNode(50);
	NODE n6=createNewNode(60);
	NODE n7=createNewNode(70);
	NODE n8=createNewNode(80);
	NODE n9=createNewNode(90);
	NODE n10=createNewNode(100);

	//inserting the nodes in the list
	insertFirst(n1,l1);
	insertFirst(n2,l1);
	insertFirst(n3,l1);
	insertFirst(n4,l1);
	insertFirst(n5,l1);
	insertFirst(n6,l1);
	insertFirst(n7,l1);
	insertFirst(n8,l1);
	insertFirst(n9,l1);
	insertFirst(n10,l1);

	//printing the list
	printList(l1);

	//inserting a new node at the end of the list
	NODE n11=createNewNode(110);
	insertEnd(n11,l1);

	//checking if the node is inserted at the end
	printList(l1);
}

