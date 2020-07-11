#include <iostream>
#include <math.h>

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
    struct Node *node = (Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->L = NULL;
    node->R = NULL;
    return node;
}

int findClosestValue(struct Node *root, int closest, int target)
{
    if (root != NULL)
    {
        if (abs(root->data - target) < abs(closest - target))
        {
            closest = root->data;
        }
        if (root->data < target)
        {
            return findClosestValue(root->R, closest, target);
        }
        else
        {
            return findClosestValue(root->L, closest, target);
        }
    }
    return closest;
}

int main()
{
    struct Node *root = newNode(10);
    int closest = INT_MAX;
    root->L = newNode(5);
    root->L->L = newNode(2);
    root->L->R = newNode(7);
    root->R = newNode(15);
    root->R->L = newNode(12);
    root->R->R = newNode(18);
    // preOrder(root);
    cout << "Closest Value : " << findClosestValue(root, closest, 13);
    return 0;
}
