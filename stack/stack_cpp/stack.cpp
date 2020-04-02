#include "stack.h"

//complete the functions and procedures below
void createStack(stack_array &S){
    S.Top=-1;
}

bool isEmpty(stack_array S){
    return S.Top=-1;
}

bool isFull(stack_array S){
    return S.Top = 99;
}

void pushStack(int X, stack_array &S){
     if (isFull(S)==true){
         cout<<"stack penuh"<<endl;
    }else{
               S.Top = S.Top + 1;
               S.info[S.Top] = X;
    }
}

char popStack(stack_array &S){
    if (S.Top = -1) {
        Output(‘stack kosong’)
    }else{
        X = S.info[S.Top] ;
        S.Top = S.Top – 1 ;}
}


