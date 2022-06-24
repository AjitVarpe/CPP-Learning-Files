#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
int main()
{
    // 
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    // Allocated three Nodes in Seq
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 15;
    head->next = second;

    second->data = 25;
    second->next = third;

    third->data = 35;
    third->next = NULL;
    
    printList(head);

    return 0;
}