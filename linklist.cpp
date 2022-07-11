#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
class Node{
	public:
	int Data;
	Node *next;
	public:
	Node(int val){
		Data = val;
		next = NULL;
	}
	
};

void insert_at_begin(Node *head,int Val){
		Node *temp,*ptr;
		ptr = head;
		head->Data = Val;
		head->next = ptr;
	}
int main(){
	Node *head = new Node(2);
	insert_at_begin(head,5);
	cout<<head->Data;
	cout<<head->next->Data;
	


	return 0;
}