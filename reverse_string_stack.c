//given a string, reverse it using stack 

//input: str = "GeekQuiz"
//output: ziuQskeeG

//input: str = "abc"
//output: cba

//approach: the idea is to create an empty stack and push all the characters from the string into it. then pop each character one by one from the stack and put them back into the input string starting from the O'th index. As we all know, stacks work on the principle of FILO [firts in, last out]. Aftere popping all the elements and placing them back to string, the formed string would be reversed.


//create an empy stack
// one by one push all characters of string to stack 
//one by one pop all characters from stack and put them back to string


#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//a structure to represent a stack

struct Stack {
    int top;
    unsigned capacity;
    char* array 
};

//function to create a stack of given
//capacity. It initializes size of stack as 0

struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack -> capacity =capacity;
    stack -> top = -1;
    stack -> array = (char*) malloc (stack -> capacity * sizeof(char));
    return stack;
}
