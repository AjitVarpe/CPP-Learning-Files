#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int main(){
    struct Node* root = new Node(5);
    root->left=new Node(6); 
    root->right=new Node(7); 
    root->left->left=new Node(8);
    root->left->right=new Node(9);
    root->right->left=new Node(10);

    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    cout<<root->left->left->data<<endl;
    cout<<root->left->right->data<<endl;
    cout<<root->right->left->data<<endl;



    return 0;
}