//Header file
#include<iostream>
using namespace std;
//Node class 
class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
    //Constructor
    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};
//class for doubly linked list
class Dlink
{
    public:
    Node* head;
    Node* tail;
    int count = 0;

    Dlink()
    {
        head = NULL;
        tail = NULL;
    }
    //insertion at head or beginning
    void inserthead(int val)
{
    if(head == NULL)
    {
        Node* new_node = new Node(val);
        new_node->next = NULL;
        new_node->prev = NULL;
        head = tail = new_node;
        count++;
    }
    else
    {
        Node* new_node = new Node(val);
        new_node->next = head;
        new_node->prev = NULL;
        head->prev = new_node;
        head = new_node;
        count++;
    }
}
void inserttail(int val)
{
    if(head == NULL)
    {
        inserthead(val);
        return;
    }
    else
    {
        Node* new_node = new Node(val);
        tail->next = new_node;
        new_node->next = NULL;
        new_node->prev = tail;
        tail = new_node;
        count++;
    }
}
void insertpos(int val, int pos)
{
    if(pos == 1)
    {
        inserthead(val);
        return;
    }
    else if(pos == count + 1)
    {
        inserttail(val);
    }
    else
    {
        Node* new_node = new Node(val);
        Node* temp = head;
        int cnt = 1;
        while(cnt < pos -1)
        {
            temp = temp->next;
            cnt++;
        }
        new_node->prev = temp;
        new_node->next = temp->next;
        temp->next->prev = new_node;
        temp->next = new_node;
        count++;
    }
}
void deletehead()
{
    if(head == NULL)
    {
        cout << "Nothing to delete " << endl;
        return;
    }
    else if(count == 1)
    {
        Node* temp = head;
        cout << "Deleted Element is : " << head->data;
        head = tail = NULL;
        delete(temp);
        count--;
    }
    else
    {
        Node* temp = head;
        cout << "Deleted Element is : " << temp->data;
        head = temp->next;
        head->prev = NULL;
        delete(temp);
        count--;
    }
}
void deletetail()
{
    if(head == NULL)
    {
        cout << "Nothing to delete " << endl;
        return;
    }
    else if(count == 1)
    {
        deletehead();
        return;
    }
    else
    {
        Node* temp = tail;
        cout << "Deleted Element is : " << temp->data << endl;
        tail = temp->prev;
        tail->next = NULL;
        delete(temp);
        count--;
    }
}
void deletepos(int pos)
{
    if(pos == 1)
    {
        deletehead();
        return;
    }
    else if(pos == count)
    {
        deletetail();
        return;
    }
    else
    {
        Node* temp = head;
        int cnt = 1;
        while(cnt < pos - 1)
        {
            temp = temp->next;
            cnt++;
        }
        Node* del = temp->next;
        cout << "Deleted Element is : " << del->data << endl;
        temp->next = del->next;
        del->next->prev = temp;
        delete(del);
        count--;
    }
}
void display()
{
    if(head == NULL)
    {
        cout << "There is NO List " << endl;
        return;
    }
    else
    {
        cout << "Displaying the List " << endl;
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
    }
}


};
int main()
{
    Dlink obj;
    int val, pos, ch;
    do
    {
        cout << endl;
        cout << "1) Insert At Head " << endl;
        cout << "2) Insert At Tail " << endl;
        cout << "3) Insert At Position " << endl;
        cout << "4) Delete At Head " << endl;
        cout << "5) Delete At Tail " << endl;
        cout << "6) Delete At Position " << endl;
        cout << "7) Display " << endl;
        cout << "8) Exit " << endl;
        cout << "Enter Your choice :";
        cin >> ch;
        switch(ch)
        {
            case 1:
                cout << "Enter The Element :";
                cin >> val;
                obj.inserthead(val);
                break;
            case 2:
                cout << "Enter The Element :";
                cin >> val;
                obj.inserttail(val);
                break;
            case 3:
                cout << "Enter the Position :";
                cin >> pos;
                if(pos < 0 || pos > obj.count + 1)
                {
                    cout << "Invalid Input" << endl;
                }
                else
                {
                    cout << "Enter The Element :";
                    cin >> val;
                    obj.insertpos(val, pos);
                }
                break;
            case 4:
                obj.deletehead();
                break;
            case 5:
                obj.deletetail();
                break;
            case 6:
                cout << "Enter the Position :";
                cin >> pos;
                obj.deletepos(pos);
                break;
            case 7:
                obj.display();
                break;
            case 8:
                cout << "Exiting....!" << endl;
                exit(0);
            default:
                cout << "Invalid input " << endl;
        }
    }while(ch != 8);
    return 0;
}
