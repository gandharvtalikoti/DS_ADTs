// Linked list implementation in C

#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList
{
    int lenght;
    struct Node *head;

} LinkedList;

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void printLinkedlist(Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

void insertFront(LinkedList *list, int data)
{
    Node *node = createNode(data);
    node->next = list->head;
    list->head = node;
    list->lenght++;
}
void insertBack(LinkedList *list, int data)
{
    Node *newnode = createNode(data);
    Node *current = list->head;
    if (list->head == NULL)
    {
        list->head = newnode;
        list->lenght++;
    }
    while (current->next != NULL)
        current = current->next;
    current->next = newnode;
}

int getItem(LinkedList *list, int n)
{
    int counter = 1;
    Node *curr = list->head;
    while (counter != n)
    {
        curr = curr->next;
        counter++;
    }
    return curr->data;
}

bool search(LinkedList *list, int key)
{
    Node *curr = list->head;
    while (curr != NULL)
    {
        if (key == curr->data)
        {
            return true;
        }

        curr = curr->next;
    }
    return false;
}

void remove(LinkedList *list, int key)
{
    Node *curr = list->head;
    Node *prev;
    if (curr->data == key) // if the first node itself is match
    {
        list->head = curr->next;
        free(curr);
        return;
    }

    while (curr != NULL)
    {

        if (curr->data == key)
        {
            /* code */
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    if (curr == NULL)
    {
        return;
    }

    prev->next = curr->next;
    free(curr);
}

int main()
{
    LinkedList *list;
    list->head = NULL;
    list->lenght = 0;
    insertFront(list, 1);
    insertFront(list, 2);
    insertFront(list, 3);
    insertFront(list, 4);
    insertFront(list, 5);
    insertFront(list, 6);

    insertBack(list, 7);
    insertBack(list, 7);
    insertBack(list, 7);
    insertBack(list, 7);
    printLinkedlist(list->head);

    printf("\nitem at pos - %d is %d", 3, getItem(list, 3));
    return 0;
}