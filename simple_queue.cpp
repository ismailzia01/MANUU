#include <iostream>
using namespace std;
#define N 10
int front = -1, rear = -1, i, arr[N];
void enQueue()//declaration and defination of insertion
{
    if(rear == N-1)//if full 
    cout << "Queue is full " << endl;
    else if(rear == -1)//if empty we set the pointer to point to first postion of the array 
    {
        front = rear = 0;
        cout << "Insert your element in the queue :";
        cin >> arr[rear];//NOTE we are not incrementing the rear value
    }
    else 
    {
        cout << "Insert your element in the queue :";
        cin >> arr[++rear];//here we will first increment then asssign
    }
}
void deQueue()//declaration and defination of deletion
{
    if(front == -1)//if emepty
    cout << "Queue is empty " << endl;
    else
    cout << "Deleted element from the queue is " << arr[front++] << endl;//we first print then increment
    
}
void display()//declaraation and defination to display the Queue
{
    if(front == -1)//if Queue is empty there is nothing to print
    cout << "Queue is empty " << endl;
    else 
    {
        for(i = front; i <= rear; i++)//print from front to last element
        {
            cout << arr[i] << "\t";
        }
        cout << endl;// new line to show menu 
    }
    
}
int main()// where actual computation of the program begins 
{
    int choice;
    cout << "Enter your choice " << endl;
    do
    {
        cout << "1) Insert " << endl;
        cout << "2) Delete " << endl;
        cout << "3) Display " << endl;
        cout << "4) Exit " << endl;
        cin >> choice;
        switch (choice)
        {
            case 1:enQueue();
            break;
            case 2:deQueue();
            break;
            case 3:display();
            break; 
            case 4:cout << "Exiting......!" << endl;
            exit(0);
            default:cout << "Invalid choice " << "Enter your choice " << endl;

        }
    } while (choice != 4);
    return 0;
    
}
