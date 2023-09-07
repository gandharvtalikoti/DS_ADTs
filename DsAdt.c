#include <stdio.h>
#define MAX 10
// Stack structure
typedef struct Stack
{
    int items[MAX];
    int top;

} stack;

int push(stack *s, int item)
{
    if (s->top == MAX) // stack overflow
    {
        printf("\nstack overflow");
        return -1;
    }

    s->items[++s->top] = item;
    printf("\n%d pushed to stack", item);
    return 1;
}

int Peek(stack s)
{
    return s.items[s.top];
}
int pop(stack *s)
{
    if (s->top == -1)
    {
        printf("\nstack underflow");
        return -1;
    }
    printf("\n%d popped", s->items[s->top--]);
}

int get_len_of_stack(stack s)
{
    return s.top + 1;
}

void print_stack(stack s)
{
    printf("\n your stack - ");
    for (int i = 0; i < get_len_of_stack(s); i++)
        printf("%d ", s.items[i]);
}

int main()
{
    stack s;
    s.top = -1;
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);
    push(&s, 5);
    // printf("top - %d\n", s.top);
    print_stack(s);
    printf("\ntop ele is - %d", Peek(s));
}
