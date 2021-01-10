#include <iostream>
using namespace std;

typedef struct node
{
  int val;
  struct node *left, *right;
} tree;

tree *newnode(int data)
{
  tree *temp = (tree *)malloc(sizeof(tree));
  temp->val = data;
  temp->left = temp->right = nullptr;
  return temp;
}

tree *insert(tree *root, int key)
{
  if (root == nullptr)
    return newnode(key);
  if (key < root->val)
    root->left = insert(root->left, key);
  else
    root->right = insert(root->right, key);
  return root;
}

void inorder(tree *ptr)
{

  if (ptr != nullptr)
  {
    inorder(ptr->left);
    cout << ptr->val;
    inorder(ptr->right);
  }
}

void find_key(tree *root, int val)
{ 
  if (root == nullptr)
    return NULL;
    

  if (root->val == val)
  {
    return inorder(root);
  }
  if (val > root->val)
  {
    cout << root->val << endl;
    find_key(root->right, val);
  }
  else
    find_key(root->left, val);
}

int main()
{
  tree *root = nullptr;
  root = insert(root, 4);
  root = insert(root, 2);
  root = insert(root, 7);
  root = insert(root, 1);
  root = insert(root, 3);
  // inorder(root);

  find_key(root, 5);

  return 0;
}
