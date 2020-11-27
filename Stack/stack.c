#include<stdio.h>
#define capacity 3

int stack[capacity]; //decler array
int top=-1;

void push(int x)
{
    if(top<capacity-1)
    {
        top=top+1; //top++
        stack[top]=x;
        printf("Successfully added item in the stack %d\n",x);
    }
    else
    {
        printf("No Space : Exception .. Stack is full");
    }
}
int pop()
{
if(top>=0)
{
    int val=stack[top];
    top=top-1;
    return val;
}
else
return 0;
}
int main()
{
    push(10);
    push(20);
    push(30);
    //push(40);
    printf("Pop from stack: %d\n",pop());
    return 0;
}