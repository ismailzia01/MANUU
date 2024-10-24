#include <iostream>
using namespace std;
#define MAX 5
int top = -1;
int a[MAX];
int i;
void push()
{
    if(top == MAX-1)//stack overflow
    cout << "Stack is overflow " << endl;
    else
    {
        cout << "Enter the item you want to push :";
        cin >> a[++top];
        cout << "Pushed item " << a[top] << endl;
    }
    
}
void pop()
{
    if(top == -1)
    cout << "Stack is empty " << endl;
    else
    cout << "Popped item from the stack is " << a[top--] << endl;
}
void peek()
{
    if(top == -1)
    cout << "Stack is empty " << endl;
    else
    cout << "Top element in the stack is " << a[top] << endl;
}
void isfull()
{
    if(top == MAX-1)
    cout << "Stack is overflow " << endl;
    else
    cout << "Stack is not full" << endl;
}
void isempty()
{
    if(top == -1)
    cout << "Stack is empty" << endl;
    else
    cout << "Stack is not empty" << endl;
}
void display()
{
    if(top == -1)
    cout << "Stack is empty " << endl;
    else
    {
        for(i = top; i >= 0; i--)
        {
            cout << a[i] << endl;
        }
    }
}
int main()
{
    int choice;
    cout << "Enter your choice " << endl;
    do
    {
        cout << "1) Push " << endl;
        cout << "2) Pop " << endl;
        cout << "3) Peek " << endl;
        cout << "4) isfull " << endl;
        cout << "5) isempty " << endl;
        cout << "6) Display " << endl;
        cout << "7) Exit " << endl;
        cin >> choice;
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:peek();
            break;
            case 4:isfull();
            break;
            case 5:isempty();
            break;
            case 6:display();
            break;
            case 7:cout << "Exiting.....!" << endl;
            exit(0);
            default:cout << "Invalid input " << endl << "Please enter valid option (1-6)" << endl;
        }
    }while(choice != 7);
    return 0;
}
