// Created by: Madhur Thareja

#include <stdio.h>
#include "stack_list.h"
#include <stdlib.h>

struct stack *createStack(){
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->list = createNewList();
    return s;
}

int isEmpty(struct stack *s){
    return s->list->count == 0;
}

void push(struct stack *s, int value){
    insertFirst(s->list, value);
}

int pop(struct stack *s){
    if(isEmpty(s)){
        printf("Stack is empty\n");
        return -1;
    }
    int value = s->list->head->ele;
    removeFirst(s->list);
    return value;
}

int top(struct stack *s){
    if(isEmpty(s)){
        printf("Stack is empty\n");
        return -1;
    }
    return s->list->head->ele;
}