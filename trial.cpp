#include<bits/stdc++.h>
#include<limits>
#include<String>
#define n = 100;
using namespace std;
struct stack{
    int top;
int arr[n];
stack(){
    top=-1;
}
bool push(int n){
if(top >= n-1){
    cout<<"stack is overflow"<<endl;
}else{
    stack[top]=n;
    top++;
}

};

int main(){
    


    return 0;
}