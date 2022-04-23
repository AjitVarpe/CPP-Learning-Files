#include <iostream>
using namespace std;

// A doubly linked list node
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

// insert a new node at the end of the list
void insert_end(struct Node **head, int new_data)
{
    struct Node *newNode = new Node;
    struct Node *last = *head;
    newNode->data = new_data;
    newNode->next = NULL;
    if (*head == NULL)
    {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = newNode;
    newNode->prev = last;
    return;
}

// Del Node form Linklist
void deleteNode(Node **head_ref, Node *del)
{
    if (*head_ref == NULL || del == NULL)
    {
        return;
    }
    if (*head_ref == del)
    {
        *head_ref = del->next;
    }
    if (del->next != NULL)
    {
        del->next->prev = del->prev;
    }
    if (del->prev != NULL)
    {
        del->prev->next = del->next;
    }
    free(del);
    return;
}

// Reverse linklist

void reverse(Node **head_ref)
{
    Node *temp = NULL;
    Node *current = *head_ref;
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if (temp != NULL)
        *head_ref = temp->prev;
}

// Display linklist After reverse
void displayList(Node *head)
{
    while (head->next != nullptr)
    {
        cout << head->data << " <==> ";
        head = head->next;
    }
    cout << head->data << endl;
}

int main()
{

    struct Node *head = NULL;
    int n;
    cout << "How many Elements we want to insert in Doubly linklist :  ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter Data : ";
        cin >> data;
        insert_end(&head, data); 
        }

        cout << "Doubly linked list is as follows: " << endl;
        displayList(head);

        // Reverse linklist
        cout << "Doubly linked list4 After Reverse is as follows: " << endl;
        reverse(&head);
        displayList(head);

        cout << "Linked list Before Deletion" << endl;
        displayList(head);
        deleteNode(&head, head->next);

        cout << "Linked List after deletion:" << endl;
        displayList(head);
        
        return 0;
    }