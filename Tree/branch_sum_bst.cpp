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

void branch_sum(Node *root, int sum, vector<int> &mysum)
{
    if (root->L == NULL and root->R == NULL)
    {
        // cout << sum + root->data << " ";
        mysum.push_back(sum + root->data);
    }
    else
    {
        branch_sum(root->L, sum + root->data, mysum);
        branch_sum(root->R, sum + root->data, mysum);
    }
}

int main()
{

    Node *root = newNode(10);
    int sum = 0;
    root->L = newNode(5);
    root->L->L = newNode(2);
    root->L->R = newNode(7);
    root->R = newNode(15);
    root->R->L = newNode(12);
    root->R->R = newNode(18);
    vector<int> mysum;
    // preOrder(root);
    branch_sum(root, sum, mysum);
    cout << "Size : " << mysum.size() << endl;
    for (int i = 0; i < mysum.size(); i++)
    {
        cout << mysum[i] << " ";
    }

    return 0;
}