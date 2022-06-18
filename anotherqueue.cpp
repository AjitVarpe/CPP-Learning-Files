#include <iostream>
using namespace std;
#define size 10
int queue[size], front = -1, rear = -1;
bool isempty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else
        return false;
}
void enqueue(int x)
{
    if (rear==size-1)
    {
        cout << "Queue is Full" << endl;
    }
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (isempty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            cout << "Poped element is " << queue[front] << endl;
            front++;
        }
    }
}
void peek()
{
    if (isempty())
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        cout<<"top element is "<<queue[front]<<endl;
    }
}

int main()
{
    int ch, val;
    cout << "Select which Operation Need to Perform on Queue " << endl;
    cout << "1 Enqueue" << endl;
    cout << "2 Dequeue " << endl;
    cout << "3 Isempty " << endl;
    cout << "4 front Element " << endl;
    cout << "5 Exit " << endl;
    do
    {
        cout << "Enter the choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the value to Insert : ";
            cin >> val;
            enqueue(val);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            cout<<isempty();
            break;
        case 4:
            peek();
            break;
        case 5:
            cout<<"Exit";
            break;

        default:
            cout<<"Invalid choice "<<endl;
            break;
        }
    }while(ch != 5);

    return 0;
}