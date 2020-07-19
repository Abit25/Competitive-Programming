#include <iostream>
#include <math.h>
#include <vector>
#include <queue>
#include <utility>

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

void levelOrder(Node *root)
{
    queue<pair<Node *, int> > q;
    q.push(make_pair(root, 1));
    int prev = 1;
    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        Node *temp = p.first;
        int curr = p.second;
        q.pop();
        if (curr == prev)
        {
            cout << temp->data << " ";
        }
        else
        {
            cout << endl;
            cout << temp->data << " ";
            prev = curr;
        }

        if (temp->L != NULL)
            q.push(make_pair(temp->L, curr + 1));

        if (temp->R != NULL)
            q.push(make_pair(temp->R, curr + 1));
    }
}

int main()
{
    Node *root = newNode(10);
    root->L = newNode(5);
    root->L->L = newNode(2);
    root->L->R = newNode(7);
    root->R = newNode(15);
    root->R->L = newNode(12);
    root->R->R = newNode(18);
    levelOrder(root);

    return 0;
}