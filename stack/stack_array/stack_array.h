#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

//structure definition for stack

struct stack {
	int size;
	int *array;
};

//creating an empty stack that is capable of storing 100 elements

struct stack *createStack();

//returns the top element of the stack
int top(struct stack *s);

//checks if the stack is empty
int is_empty(struct stack *s);

//pushes an element into the stack
void push(struct stack *s, int data);

//pops an element from the stack
int pop(struct stack *s);
