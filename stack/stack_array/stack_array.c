#include "stack_array.h"

struct stack *createStack(){
	struct stack *s=(struct stack *)malloc(sizeof(struct stack));
	s->size=0;
	s->array=(int *)malloc(sizeof(int)*100);
	return s;
}


int isEmpty(struct stack *s){
	return s->size==0;
}


void push(struct stack *s, int data){
	if(s->size==STACK_SIZE){
		printf("ERROR: Stack is full\n");
		exit(1);
	}
	s->array[s->size++]=data;
}

int top(struct stack *s){
	if(isEmpty(s)){
		printf("ERROR: Stack is empty\n");
		exit(1);
	}
	return s->array[s->size-1];
}

int pop(struct stack *s){
	if(isEmpty(s)){
		printf("ERROR: Stack is empty\n");
		exit(1);
	}
	return s->array[--s->size];
}


