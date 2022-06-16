#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void printlist(Node* n){
    while (n != NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
    
}
// void insert_at_end(Node* head,int data){
//     Node *temp,*ptr;
//     ptr = head;
//     temp = new Node();
//     temp->data=data;
//     temp->next=NULL;
//     while(ptr->next != NULL){
//         ptr = ptr->next;
//     }
//     ptr->next = temp; 
// }
// void printlist(Node* head){
//     while(n != NULL){
//         cout<<n->data<<" ";
//         n = n->next;
//     }
// }

void insert_at_end(Node *head,int data){
    Node *ptr,*temp;
    ptr = head;
    temp  = new Node();
    temp->data=data;
    temp->next=NULL;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next= temp;


}




int main(){

  Node* head = NULL;
  Node* second = NULL;
  Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data= 15;
    head->next=second;
    second->data= 25;
    second->next=third;
    third->data= 35;
    third->next=NULL;

    insert_at_end(head,45);

    printlist(head);



    return 0;
}