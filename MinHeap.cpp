#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;
    //Definations
    node();
    node(int);
    node *insert(node *root, int key);
};
node::node()
{
    data = 0;
    left = right = nullptr;
}
// Constructor for the node
node::node(int key)
{
    data = key;
    left = right = nullptr;
}
// Heapify To maintain minheap
bool heapify(node *root)
{
    bool flag = false;

    if (root->right->data < root->data)
    {
        swap(root->right->data, root->data);
        return true;
    }

    if (root->left->data < root->data)
    {
        swap(root->left->data, root->data);
        return true;
    }
    if (!flag)
        return false;
}
// Calc Height of tree
int height(node *root)
{
    if (!root)
        return 0;
    int l = height(root->left);
    int r = height(root->right);
    return (max(l, r) + 1);
}
// Print Level Order
void printCurrentLevel(node *root, int lvl)
{
    if (!root)
        return;
    if (lvl == 1)
        cout << root->data << ' ';
    printCurrentLevel(root->left, lvl - 1);
    printCurrentLevel(root->right, lvl - 1);
}
// Level Order
void levelOrder(node *root)
{
    int h = height(root);
    for (int i = 0; i <= h; i++)
    {
        printCurrentLevel(root, i);
    }

    cout << root->data;
    root->left->data;
    root->right->data;

    levelOrder(root->left);
}
// Inorder
void inorder(node *ptr)
{
    heapify(ptr);
    if (ptr == NULL)
        return;
    inorder(ptr->left);
    cout << ptr->data << endl;
    inorder(ptr->right);
}
node *newnode(int data)
{
    node *ptr = new node(data);
    return ptr;
}

int main()
{
    node *ptr = newnode(1);
    ptr->left = newnode(3);
    ptr->right = newnode(6);
    ptr->left->left = newnode(5);
    ptr->left->right = newnode(9);
    ptr->right->left = newnode(8);

    ptr->right->right = newnode(-2);
    inorder(ptr);
}
