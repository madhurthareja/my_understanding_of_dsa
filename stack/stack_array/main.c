#include "stack_array.h"

int main(){
	//create an empty stack is capable of storing 100 elements"
	struct stack *s = createStack(100);

	//push 3 elements into the stack
	push(s, 10);
	push(s, 20);
	push(s, 30);

	//print the top element of the stack
	printf("Top element is %d\n", top(s));

	//pop 4 elements from the stack. The last element is not popped because the stack is empty.
	printf("Popped element is %d\n", pop(s));
	printf("Popped element is %d\n", pop(s));
	printf("Popped element is %d\n", pop(s));
	printf("Popped element is %d\n", pop(s));
	
	return 0;

}
