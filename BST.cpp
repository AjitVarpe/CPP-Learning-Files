
#include <iostream>
using namespace std;

class BST
{
    int data;
    BST *left, *right;

public:
    BST();
    BST(int);

    BST *Insert(BST *, int);

    void Inorder(BST *);
};
BST ::BST()
    : data(0), left(NULL), right(NULL)
{
}

BST ::BST(int value)
{
    data = value;
    left = right = NULL;
}

BST *BST ::Insert(BST *root, int value)
{
    if (!root)
    {

        return new BST(value);
    }

    if (value > root->data)
    {

        root->right = Insert(root->right, value);
    }
    else
    {

        root->left = Insert(root->left, value);
    }

    return root;
}
void BST ::Inorder(BST *root)
{
    if (!root)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}

int main()
{
    BST b, *root = NULL;
    int n,t;
     cout << "Enter Root Node : " << endl;
    cin >> n;
    root = b.Insert(root, n);
    cout<<"How many Element we want to insert :"<<endl;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cout<<"Enter data :";
        cin>>n;
        cout<<endl;
        b.Insert(root, n);
    }
    b.Inorder(root);
    return 0;
}
