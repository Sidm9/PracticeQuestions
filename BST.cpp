#include <iostream>
using namespace std;

class bst
{

    int data;
    bst *right;
    bst *left;

public:
    bst();
    bst(int);

    bst *insert(bst *, int);
    void inorder(bst *);
};

bst::bst()
{

    data = 0;
    left = right = nullptr;
}

bst ::bst(int val)
{
    data = val;
    left = right = nullptr;
}

bst *bst::insert(bst *root, int value)
{
    if (!root)
        return new bst(value);
    if (value > root->data)
        root->right = insert(root->right, value);
    else
        root->left = insert(root->left, value);
    return root;
}
void bst::inorder(bst *root)
{
    if (!root)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}
int main()
{
    bst b;
    bst *root = nullptr;
    root = b.insert(root, 50);
    b.insert(root, 30);
    b.insert(root, 20);
    b.insert(root, 40);
    b.insert(root, 70);
    b.insert(root, 60);
    b.insert(root, 80);

    b.inorder(root);
    return 0;
}