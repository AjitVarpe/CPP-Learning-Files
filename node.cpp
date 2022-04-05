#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node
{

public:
	int data;
	Node *next;

	Node()
	{
		data = 0;
		next = NULL;
	}

	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

class Linkedlist
{
	Node *head;

public:
	Linkedlist() { head = NULL; }

	void insertNode(int);
	void printList();
	int totalnodes();
	int additionofnode();
};

// Function to insert a new node.
void Linkedlist::insertNode(int data)
{
	// Create the new Node.
	Node *newNode = new Node(data);

	// Assign to head
	if (head == NULL)
	{
		head = newNode;
		return;
	}

	// Traverse till end of list
	Node *temp = head;
	while (temp->next != NULL)
	{

		// Update temp
		temp = temp->next;
	}

	// Insert at the last.
	temp->next = newNode;
}

// Function to print the nodes of the linked list.
void Linkedlist::printList()
{
	Node *temp = head;

	// Check for empty list.
	if (head == NULL)
	{
		cout << "List empty" << endl;
		return;
	}

	// Traverse the list.
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}
// Function to print the total of the linked list.
int Linkedlist::totalnodes()
{
	Node *temp = head;
	int cnt = 1;
	if (head == NULL)
	{
		cout << "List empty" << endl;
	}
	else
	{

		while (temp->next != NULL)
		{
			cnt++;
			temp = temp->next;
		}
	}
	return cnt;
}

// Function to print the total of the linked list.
int Linkedlist::additionofnode()
{
	Node *temp = head;
	int total = 0;
	if (head == NULL)
	{
		total = 0;
	}
	else
	{

		while (temp->next != NULL)
		{
			total = temp->data + total;
			temp = temp->next;
		}
	}
	total = temp->data + total;
	return total;
}

// Driver Code
int main()
{
	Linkedlist list;
	int count;
	cout << "How Many Nodes Do We Want To Enter : " << endl;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		int Data;
		cout << "Enter Data : " << endl;
		cin >> Data;
		list.insertNode(Data);
	}

	cout << "Elements of the list are: ";
	list.printList();
	cout << endl;
	cout << "Total Number Of Nodes In Linklist are : " << endl;
	cout << list.totalnodes();

	cout << "Addition Of All Nodes In Linklist are : ";
	cout << list.additionofnode();
	cout << endl;
	cout << "Avg of All Nodes is : " << list.additionofnode() / list.totalnodes();

	return 0;
}
