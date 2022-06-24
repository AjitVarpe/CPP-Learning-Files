#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void printlist(Node* n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}
void printlist(Node* n){
    while(n->next->next != NULL){
        n = n->next;
    }
    cout<<"Second last Element is "<<
}
void insert_element(Node *head,int data){
    Node *temp,*ptr;
    ptr = head;
    temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(ptr->next == NULL){
        ptr->next = temp;
    }
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next=temp;
}
int main(){
    Node *head = NULL;
    head = new Node();
    cout<<"Enter value to insert :"<<endl;
    cin>>number;

    head->data=number;
    head->next = NULL;
    insert_element(head,65);
    insert_element(head,55);
    insert_element(head,75);
    printlist(head);
    return 0;
}