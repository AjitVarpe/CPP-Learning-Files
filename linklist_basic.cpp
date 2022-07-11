#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        int data=val;
       Node* next = NULL;
    }
};

int main(){
    Node* root = new Node(10);
    // root = new Node();
    // root->data = 10;
    // root->next = NULL;
    cout<<root->data<<endl;
    cout<<root->next<<endl;
    return 0;
}