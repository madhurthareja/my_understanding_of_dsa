
#include "linked_list.h"

struct stack{
    LIST list;
};

struct stack *createStack();

int isEmpty(struct stack *s);

void push(struct stack *s, int value);

int pop(struct stack *s);

int top(struct stack *s);