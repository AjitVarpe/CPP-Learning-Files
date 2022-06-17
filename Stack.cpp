// #include <bits/stdc++.h>
// #include <limits>
#include<iostream>
// #include <String>
using namespace std;
int stack[100];
int n = 100;
int top = -1;
void push(int x)
{
    if (top >= n - 1)
    {
        cout << "stack is Overflow " << endl;
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "Stack is Underflow " << endl;
    }
    else
    {
        cout << "The Poped Element is " << stack[top] << endl;
        top--;
    }
}
int Top()
{
    return stack[top];
}
void display()
{
    if (top >= 0)
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << ", ";
        }
    }
    else
        cout << "stack is Empty" << endl;
}

int main()
{
    int ch, ele;
    cout << "Select the below option " << endl;
    cout << "1 to insert data in Stack" << endl;
    cout << "2 To Pop data from Stack" << endl;
    cout << "3 To Display Data From Stack" << endl;
    cout << "4 to Exit " << endl;
    do
    {
        cout << "Enter choice " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter value to be inserted" << endl;
            cin >> ele;
            push(ele);
            break;
        case 2:
            pop();
            break;

        case 3:
            display();
            break;
        case 4:
            cout << "exit" << endl;
            break;
        default:
        {
            cout << "Invalid choice" << endl;
        }
        }
    } while (ch != 4);

    return 0;
}