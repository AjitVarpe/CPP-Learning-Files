#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *prev;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int newdata) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = newdata;
   newnode->prev = NULL;
   newnode->next = head;
   if(head != NULL)
   head->prev = newnode ;
   head = newnode;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while(ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
    int n,m;
    cout<<"Enter How Many Element We Want to Insert "<<endl;
    cin>>n;
    for(int i= 0; i<n;i++){
        cout<<"Enter Element Data"<<endl;
        cin>>m;
        insert(m);
    }
   cout<<"The doubly linked list is: ";
   display();
   return 0;
}