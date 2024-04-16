#include <bits/stdc++.h>
using namespace std;

typedef struct Node
{
    int value;
    node *left;
    node *right;
} node;

typedef struct Bst
{
    node *root;
} Bst;

Bst *create_bst()
{
    Bst *bst;
    bst->root = NULL;
    return bst;
}

int main()
{

    return 0;
}