// Created by: Madhur Thareja

#include <stdio.h>
#include "stack_list.h"

//A main function to test the stack
int main(){
    
    //Create a stack that can hold 100 integers
    struct stack *s = createStack();

    //push 3 elements into the stack
    push(s, 10);
    push(s, 20);
    push(s, 30);

    //print the top element of the stack
    printf("Top element is %d\n", top(s));

    //pop the 4 elements from the stack. The last pop should throw error
    printf("Popped from stack : %d\n", pop(s));
    printf("Popped from stack : %d\n", pop(s));
    printf("Popped from stack : %d\n", pop(s));
    printf("Popped from stack : %d\n", pop(s));

    return 0;
}