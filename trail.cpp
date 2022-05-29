#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
int main(){
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();

	head->data = 5;
	head->next = second;
	second->data=6;
	second->next=third;
	third->data=7;
	third->next=NULL;
	cout<<second->next;


	return 0;
}