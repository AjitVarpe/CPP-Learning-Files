#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
int stack[100],n=100,top=-1;
void push(int x){
    if(top >= n-1){
        cout<<"stack is Overflow "<<endl;
        return;
    }
    top++;
    stack[top]=x;
}
void pop(){
    if(top<=-1){
        cout<<"Stack is Underflow "<<endl;
        return;
    }
    cout<<"The Poped Element is "<<stack[top]<<endl;
    top--;
}
void Top(){
    return stack[top];
}
void display(){
    if(top>=0){
        
    }
}
int main(){
    


    return 0;
}