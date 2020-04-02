#ifndef STACK_AR_H_INCLUDED
#define STACK_AR_H_INCLUDED
#include<iostream>
#include<string.h>



using namespace std;
struct stack_array{
    int info[100];
    int Top;
};

void createStack(stack_array &S);
bool isEmpty(stack_array S);
bool isFull(stack_array S);
void pushStack(int c, stack_array &S);
char popStack(stack_array &S);


#endif // STACK_AR_H_INCLUDED
