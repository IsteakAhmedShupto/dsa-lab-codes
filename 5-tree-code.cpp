#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *insertElem(int data)
{
    Node *newNode = new Node();

    newNode->data = data;

    return newNode;
}

void printInorder(Node *node)
{
    if (node == NULL)
        return;

    printInorder(node->left);

    cout << node->data << " ";

    printInorder(node->right);
}

void printPreorder(Node *node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";

    printPreorder(node->left);

    printPreorder(node->right);
}

void printPostorder(Node *node)
{
    if (node == NULL)
        return;

    printPostorder(node->left);

    printPostorder(node->right);

    cout << node->data << " ";
}

int main()
{
    Node *root = insertElem(180);
    root->left = insertElem(220);
    root->right = insertElem(200);
    root->left->left = insertElem(10);
    root->left->right = insertElem(310);
    root->right->left = insertElem(150);
    root->right->right = insertElem(300);

    cout << "Inorder Traversal: ";
    printInorder(root);
}
