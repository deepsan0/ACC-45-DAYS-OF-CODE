#include <iostream>
using namespace std;
 
class BST {
    int data;
    BST *left, *right;
 
public:
    BST();
    BST(int);
    BST* Insert(BST*, int);
    void Inorder(BST*);
};

BST ::BST()
    : data(0)
    , left(NULL)
    , right(NULL)
{
}
 
BST ::BST(int value)
{
    data = value;
    left = right = NULL;
}
 
BST* BST ::Insert(BST* root, int value)
{
    if (!root) {
        return new BST(value);
    }
 
    if (value > root->data) {
        
        root->right = Insert(root->right, value);
    }
    else if (value < root->data){
        root->left = Insert(root->left, value);
    }
 
    return root;
}

void BST ::Inorder(BST* root)
{
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}
 
// Driver code
int main()
{
    BST b, *root = NULL;
    root = b.Insert(root, 14);
    b.Insert(root, 10);
    b.Insert(root, 17);
    b.Insert(root, 12);
    b.Insert(root, 11);
    b.Insert(root, 20);
    b.Insert(root, 18);
    b.Insert(root, 25);
    b.Insert(root, 8);
    b.Insert(root, 22);
    b.Insert(root, 23);
    b.Inorder(root);
    return 0;
}
