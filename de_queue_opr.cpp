#include <iostream>
using namespace std;
#define N 10
int front = -1, rear = -1, i, a[N];
class DEqueue
{
public:
    void insertFront();
    void insertRear();
    void deleteFront();
    void deleteRear();
    void isFull();
    void isEmpty();
    void display();
};

void DEqueue::insertFront()
{
    if((front == 0 && rear == N-1) || (front == rear + 1))
    {
        cout << "Queue is full!" << endl;
        return;
    }
    else if(front == -1) // Initial insertion
    {
        front = rear = 0;
        cout << "Insert element at front: ";
        cin >> a[front];
    }
    else if(front == 0) // Wrap around to the end
    {
        front = N - 1;
        cout << "Insert element at front: ";
        cin >> a[front];
    }
    else
    {
        cout << "Insert element at front: ";
        cin >> a[--front];
    }
}

void DEqueue::insertRear()
{
    if((front == 0 && rear == N-1) || (front == rear + 1))
    {
        cout << "Queue is full!" << endl;
        return;
    }
    else if(rear == -1) // Initial insertion
    {
        front = rear = 0;
        cout << "Insert element at rear: ";
        cin >> a[rear];
    }
    else if(rear == N-1) // Wrap around to the beginning
    {
        rear = 0;
        cout << "Insert element at rear: ";
        cin >> a[rear];
    }
    else
    {
        cout << "Insert element at rear: ";
        cin >> a[++rear];
    }
}

void DEqueue::deleteFront()
{
    if(front == -1)
    {
        cout << "Queue is empty!" << endl;
        return;
    }

    cout << "Deleted element from front: " << a[front] << endl;
    
    if(front == rear) // Only one element in the queue
    {
        front = rear = -1;
    }
    else if(front == N-1) // Wrap around to the beginning
    {
        front = 0;
    }
    else
    {
        front++;
    }
}

void DEqueue::deleteRear()
{
    if(rear == -1)
    {
        cout << "Queue is empty!" << endl;
        return;
    }

    cout << "Deleted element from rear: " << a[rear] << endl;
    
    if(front == rear) // Only one element in the queue
    {
        front = rear = -1;
    }
    else if(rear == 0) // Wrap around to the end
    {
        rear = N-1;
    }
    else
    {
        rear--;
    }
}

void DEqueue::isFull()
{
    if((front == 0 && rear == N-1) || (front == rear + 1))
    {
        cout << "Queue is full!" << endl;
    }
    else
    {
        cout << "Queue is not full." << endl;
    }
}

void DEqueue::isEmpty()
{
    if(front == -1)
    {
        cout << "Queue is empty!" << endl;
    }
    else
    {
        cout << "Queue is not empty." << endl;
    }
}

void DEqueue::display()
{
    if(front == -1)
    {
        cout << "Queue is empty!" << endl;
        return;
    }
    
    cout << "Queue elements are:\t";
    if(front <= rear)
    {
        for(int i = front; i <= rear; i++)
            cout << a[i] << "\t";
    }
    else
    {
        for(int i = front; i < N; i++)
            cout << a[i] << "\t";
        for(int i = 0; i <= rear; i++)
            cout << a[i] << "\t";
    }
    cout << endl;
}

int main()
{
    DEqueue obj;
    int choice;
    cout << "Enter your choice: " << endl;

    do
    {
        cout << "1) Insert Front" << endl;
        cout << "2) Insert Rear" << endl;
        cout << "3) Delete Front" << endl;
        cout << "4) Delete Rear" << endl;
        cout << "5) Check if Full" << endl;
        cout << "6) Check if Empty" << endl;
        cout << "7) Display" << endl;
        cout << "8) Exit" << endl;
        cin >> choice;

        switch(choice)
        {
            case 1: obj.insertFront();
                    break;
            case 2: obj.insertRear();
                    break;
            case 3: obj.deleteFront();
                    break;
            case 4: obj.deleteRear();
                    break;
            case 5: obj.isFull();
                    break;
            case 6: obj.isEmpty();
                    break;
            case 7: obj.display();
                    break;
            case 8: cout << "Exiting...!" << endl;
                    exit(1);
            default: cout << "Invalid input! Please select a valid option." << endl;
        }
    }
    while(choice != 8);

    return 0;
}
