#include <iostream>
using namespace std;
int stack[100], n = 100, top = -1;
void push(int x)
{
    if (top >= n - 1)
    {
        cout << "stack is already overflow " << endl;
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top <= -1)
    {
        cout << "Stack is Underflow" << endl;
    }
    else
    {
        cout << "Element poped is " << stack[top];
        top--;
    }
}
int Top()
{
    return stack[top];
}
void display()
{
    if (top <= -1)
    {
        cout << "No Element to Display " << endl;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << ", ";
        }
        cout<<endl;
    }
}

int main()
{
    int ch, val;
    cout << " 1 For Insert Data In Stack  " << endl;
    cout << " 2 For Pop Data From Stack  " << endl;
    cout << " 3 For Display Data  " << endl;
    cout << " 4 For Exit  " << endl;
    do
    {
        cout << "Enter choice " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the data to insert " << endl;
            cin >> val;
            push(val);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            cout << "Exit" << endl;
            break;

        default:
        {
            cout << "Invalid Choice " << endl;
        }
        }

    } while (ch != 4);

    return 0;
}