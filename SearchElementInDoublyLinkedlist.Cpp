#include <iostream>
using namespace std;

// node structure
struct Node
{
    int data;
    Node *next;
    Node *prev;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    // Add new element to the list
    void push_back(int newElement)
    {
        Node *newNode = new Node();
        newNode->data = newElement;
        newNode->next = NULL;
        newNode->prev = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    // Search an element in the list
    void SearchElement(int searchValue)
    {
        Node *temp = head;
        int found = 0;
        int i = 0;

        if (temp != NULL)
        {
            while (temp != NULL)
            {
                i++;
                if (temp->data == searchValue)
                {
                    found++;
                    break;
                }
                temp = temp->next;
            }
            if (found == 1)
            {
                cout << searchValue << " is found at index = " << i << endl;
            }
            else
            {
                cout << searchValue << " is not found in the list" << endl;
            }
        }
        else
        {
            cout << "The list is empty.\n";
        }
    }

    // display the content of the list
    void PrintList()
    {
        Node *temp = head;
        if (temp != NULL)
        {
            cout << "The list contains: ";
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        else
        {
            cout << "The list is empty.\n";
        }
    }
};


int main()
{
    LinkedList MyList;
    int n;
    cout << "How many Elements we want to insert in Doubly linklist :  ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter Data : ";
        cin >> data;
        MyList.push_back(data);
    }

    MyList.PrintList();

    // search for element in the list
    cout << "Enter The Element That We Want to Search : ";
    cin >> n;
    MyList.SearchElement(n);
    return 0;
}