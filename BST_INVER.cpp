#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int data)
    {
        data = data;
        left = right = nullptr;
    }
};

void preorder(struct node *root)
{
    if (root == nullptr)
    {
        return;
    }
    else
    {
        cout << root->data << endl;
        preorder(root->left);
        preorder(root->right);
    }
}

void invert(struct node *root)
{
    if (root == nullptr)
    {
        return;
    }

    swap(root->left, root->right);
    invert(root->left);
    invert(root->right);
}
int main()
{
    struct node *root = nullptr;

    root = new struct node(1);
    
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);


    return 0;
}