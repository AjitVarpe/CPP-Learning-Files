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
	
};

void Linkedlist::insertNode(int data)
{
	
	Node *newNode = new Node(data);


	if (head == NULL)
	{
		head = newNode;
		return;
	}

	
	Node *temp = head;
	while (temp->next != NULL)
	{

		
		temp = temp->next;
	}


	temp->next = newNode;
}


void Linkedlist::printList()
{
	Node *temp = head;

	
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
	return 0;
}
