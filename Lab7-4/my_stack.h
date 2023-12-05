#pragma once
#define MAX 100
typedef int ElemType;
typedef struct MyStack
{
  ElemType element[MAX];
  int top;
}STACK;

void makeNullStack(STACK *S);
int  Empty(STACK S);
void push(ElemType x, STACK *S);
ElemType  top(STACK S);
void pop(STACK *S);