#include<bits/stdc++.h>
using namespace std;

typedef stack{
    int data[MAX];
    int top;
}stack;

void push(stack *s, int x)
{
    s->data[++s->top] = x;
}
void pop(stack *s)
{
    s->top--;
}

int peek(stack *s)
{
    return s->data[s->top];
}

int main()
{
    stack *s;
    s->top = -1;
    push(s, 10);
    push(s, 20);
    return 0;
}