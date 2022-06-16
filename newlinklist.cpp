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
void insert_at_end(Node *head,int data){
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
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data=25;
    head->next = second;
    second->data=35;
    second->next = third;
    third->data=45;
    third->next = NULL;

    insert_at_end(head,55);
    printlist(head);
    return 0;
}