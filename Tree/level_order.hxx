#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

struct Node
{
    int data;
    struct Node *L, *R;
};

void preOrder(Node *root)
{
    if (root != NULL)
    {
        preOrder(root->L);
        cout << root->data << " ";
        preOrder(root->R);
    }
}

Node *newNode(int data)
{

    Node *node = new Node();
    node->data = data;
    node->L = NULL;
    node->R = NULL;
    return node;
}