#include <iostream>
using namespace std;
#define N 5
int i, ele, f, r, rear = -1, front = -1, a[N];

class CQ
{
public:
    void insert_ele();
    void delete_ele();
    void display_ele();
};

void CQ::insert_ele()//declaration and defination of inserting the element
{
    if ((front == 0 && rear == N - 1) || (front == rear + 1))//checking if the queue is full 
        cout << "Queue is Full" << endl;
    else if (front == -1 && rear == -1)//if empty set front and rear to 0 index
    {
        cout << "Insert the Element: ";
        front = rear = 0;
        cin >> ele;
        a[rear] = ele;
    }
    else if (rear == N - 1 && front != 0)/* if rear insert the last position
                                            element and there is space in
                                            front (means 0 index or first 
                                            position and so on)
                                             */
    {
        cout << "Insert the Element: ";
        rear = 0;
        cin >> ele;
        a[rear] = ele;//note we are not incrementing the rear pointer
    }
    else
    {
        cout << "Insert the Element: ";
        cin >> ele;
        a[++rear] = ele;// we are pre incrementing so the pointer points the element
    }
}

void CQ::delete_ele()//declaration and definition of deletion
{
    if (front == -1 && rear == -1)// check if queue is empty or not
        cout << "Queue is Empty" << endl;
    else if (front == rear)
    {
        cout << "Deleted Element: " << a[front] << endl;
        front = rear = -1;
    }
    else if (front == N - 1)
    {
        cout << "Deleted Element: " << a[front] << endl;
        front = 0;
    }
    else
    {
        cout << "Deleted Element: " << a[front++] << endl;
    }
}

void CQ::display_ele()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is Empty" << endl;
        return;
    }
    cout << "Queue Elements: ";
    if (front <= rear)
    {
        for (int i = front; i <= rear; i++)
            cout << a[i] << "\t";
    }
    else
    {
        for (int i = front; i < N; i++)
            cout << a[i] << "\t";
        for (int i = 0; i <= rear; i++)
            cout << a[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int choice;
    CQ n;
    do
    {
        cout << "1) Insert " << endl;
        cout << "2) Delete " << endl;
        cout << "3) Display " << endl;
        cout << "4) Exit " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            n.insert_ele();
            break;
        case 2:
            n.delete_ele();
            break;
        case 3:
            n.display_ele();
            break;
        case 4:
            cout << "Exiting....!" << endl;
            exit(1);
        default:
            cout << "Invalid choice. Please choose an option." << endl;
        }
    } while (choice != 4);
    
    return 0;
}
