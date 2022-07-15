#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void insertFront(Node **head, int val)
{
    Node *new_node = new Node();
    new_node->data = val;
    new_node->next = *head;
    *head = new_node;
    cout << "Element inserted is " << new_node->data << endl;
}
void insertend(Node *head, int val)
{
    Node *ptr, *temp;
    ptr = head;
    temp->data = val;
    temp->next = NULL;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
}
void printlist(Node *node)
{
    cout << "LinkedList is : ";
    while (node != NULL)
    {
        cout << node->data << ", ";
        node = node->next;
    }
}
int main()
{
    Node *head = new Node();
    insertFront(&head, 50);
    insertFront(&head, 40);
    insertFront(&head, 30);
    insertFront(&head, 20);
    insertFront(&head, 10);
    insertend(head, 60);
    printlist(head);
}