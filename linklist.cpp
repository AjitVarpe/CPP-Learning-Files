#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;

// public:
// 	Node(int val)
// 	{
// 		data = val;
// 		next = NULL;
// 	}
	
};

	void insert_in_begin(Node *head, int val)
	{
		Node *temp = new Node();

		temp->data = val;
		temp->next = *head;
		*head = temp;
	}
	void insert_in_end(Node **head, int val)
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
int main()
{
	Node *head = new Node();
	head->data = 5;
	head->next = NULL;
	insert_in_begin(&head,4);
	insert_in_begin(&head,3);
	insert_in_begin(&head,2);
	insert_in_begin(&head,1);
	cout<<head->data<<", ";
	cout<<head->next->data<<", ";
	cout<<head->next->next->data<<", ";
	cout<<head->next->next->next->data<<", ";
	// while(head!= NULL){
	// 	cout<<head->data<<", ";
	// 	head = head->next;
	// }
}