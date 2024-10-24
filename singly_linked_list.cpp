#include <iostream>//header file for input and output
using namespace std;//wrinting once , instead of writing again and again std::
class Node//Node class
{
    public:
    int data;//data member for node value

    Node* next;//pointer member for node address

    Node(int val)//constructor
    {
        this->data = val;
        this->next = NULL;
    }
};
class Linked_List//A seperate class for link list operations
{
    private:
    //int ele;
    int count;//for counting the number of nodes
    Node* head;

    public:
    //int val;
    Linked_List()//constructor
    {
        head = NULL;
        count = 0;
    }
    //Function declarations 
    void insert_at_head(int val);
    void insert_at_tail(int val);
    void insert_at_position(int val, int pos);
    void delete_at_head();
    void delete_at_tail();
    void delete_at_position(int pos);
    void display();
};
void Linked_List::insert_at_head(int val)//Function definition for Inserting an element at head 
{
    if(head == NULL)//if there is no node available
    {
        Node* new_node = new Node(val);
        new_node->next = NULL;
        head = new_node;
        count++;
        return;//returning so function get terminated
    }
    Node* new_node = new Node(val);//Creating a node before insertion 
    new_node->next = head;//assigning head in the next of new_node
    head = new_node;//assigning the adress of new node in head 
    count++;//incrementing count
}
void Linked_List::insert_at_tail(int val)//Function definition of Inserting an element at tail
{
    Node* new_node = new Node(val);//Creating a Node as usual
    if(head == NULL)//Checking if there is a node or not
    {
        head = new_node;
        new_node->next = NULL;
        count++;
        return;
    }
    Node* temp = head;//assigning head in a temporary pointer 
    while(temp->next != NULL)//moving the temp pointere to just before the last Node
    {
        temp = temp->next;
    }
    temp->next = new_node;//assigning the adress of new node in the temp next
    new_node->next = NULL;//and finally assigning null  
    count++;//incrementing count 
}
void Linked_List::insert_at_position(int val, int pos)//Function definition for inserting an element in a specific position
{
    Node* new_node = new Node(val);//creating a new node as usual
    if(pos == 1)
    {
        new_node->next = head;
        head = new_node;
        count++;
    }
    if(pos <= 0 || pos > count+1)//checking if the pos is valid or not
    {
        cout << "Invalid position " << endl;
        return;
    }
    else if(pos == count+1)
    {
        Node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = NULL;
        count++;
    }
    else
    {
        Node* temp = head;//A temp pointer 
        int p = 1;//A temp variable
        while(p < pos-1)
        {
            temp = temp->next;
            p++;
        }
        new_node->next = temp->next;//assigning the address of temp next in the new node of next
        temp->next = new_node;// assigning the new node address in temp next
    }

}
void Linked_List::delete_at_head()//Function definition for deleting an element at head 
{
    if(head == NULL)//Checking if there is a node or not
    {
        cout << "List is empty , There nothing to delete " << endl;
        return;//returning as there is no node
    }
    Node* temp = head;//creating a temp pointer
    head = temp->next;//assigning the address of temp next in head
    cout << "Deleted Element " << temp->data << endl;//giving a message of deleted element
    //temp = NULL;//setting the null so there is no memory leak
    delete temp;//deleting the node
    count--;//decrementing count so number of nodes can be true
}
void Linked_List::delete_at_tail()//Function definition for deleting an element at tail
{
    if(head == NULL)//Checking if there is anything to delete 
    {
        cout << "List is empty , There is nothing to delete" << endl;
        return;//returning back as there nothing to delete
    }
    if(count == 1)
    {
        cout << "Deleted element : " << head->data << endl;
        delete head;
        head = NULL;
        count--;
        return;
    }
    Node* temp = head;//creating a temp pointer
    while(temp->next->next != NULL)//condition to stop just before the deleting node
    {
        temp = temp->next;
    }
    Node* del = temp->next;
    cout << "Deleted Element " << del->data << endl;//giving a message of deleted element
    delete del;//deleting the node
    temp->next = NULL;//assigning null in the next of deleting node
    count--;//decrementing count
}
void Linked_List::delete_at_position(int pos)//Function definition of deleting an element at a specific position
{
    if(head == NULL)//checking if there is no node available
    {
        cout << "List is empty , There is nothing to delete " << endl;
        return;//return back
    }
    else if(pos == 1)//if asked for first position
    {
        delete_at_head();
        /*
        Node* temp = head;
        head = temp->next;
        cout << "Deleted Element : " << temp->data << endl;
        delete temp;
        count--;
        */
    }    
    else if(pos <= 0 || pos > count)//range of position
    {
        cout << "Invalid Positon " << endl;//error handling for invalid input
        return; 
    }
    else if(pos == count)//if asked for last
    {
        delete_at_tail();
        /*
        Node* temp = head;//creating a temp pointer
        while(temp->next->next != NULL)//condition to stop just before the deleting node
        {
            temp = temp->next;
        }
        cout << "Deleted Element " << temp->data << endl;//giving a message of deleted element
        Node* del = temp->next;
        delete temp->next;//deleting the node
        del = NULL;//assigning null in the next of deleting node
        count--;//decrementing count
        */
    }
    else
    {
        Node* temp = head;//creating a temp pointer
        int p = 1;//A temp variable
        while(p < pos-1)
        {
            temp = temp->next;
            p++;
        }
        Node* del = temp->next;
        temp->next = del->next;
        //assigning temp next next in the temp next making a bond between prev node of deleted node and next
        //assigning null
        cout << "Deleted Element " << del->data << endl;//given a massage of deleted element
        delete del;//deleting the element
        count--;//decrementing count 
    }
}
void Linked_List::display()//Function definition for displaying the element
{
    if(count == 0)//Means there is no node
    cout << "There is no Node available " << endl;
    else
    {
        Node* temp = head;//creating a temp pointer
        cout << "Displaying the List " << endl;
        while(temp != NULL)//printing values till last
        {
            cout << temp->data << "\t";
            temp = temp->next;
        }
        cout << endl;
    }
}
int main()//Main function where program starts
{
    Linked_List obj;//making an object of linked list class
    int choice, val, pos;//declaring needed variables
    do
    {//do while loop to showing the menu again and again
        cout << "1) Insert At Head " << endl;
        cout << "2) Insert At A Position " << endl;
        cout << "3) Insert At Tail " << endl;
        cout << "4) Delete At Head " << endl;
        cout << "5) Delete At A Position " << endl;
        cout << "6) Delete At Tail" << endl;
        cout << "7) Display " << endl;
        cout << "8) Exit " << endl;
        cout << "Enter your choice :";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter the value :";
                cin >> val;
                obj.insert_at_head(val);
                break;
            case 2:
                cout << "Enter the value :";
                cin >> val;
                cout << "Specify The Position :";
                cin >> pos;
                obj.insert_at_position(val, pos);
                break;
            case 3:
                cout << "Enter the value :";
                cin >> val;
                obj.insert_at_tail(val); 
                break;
            case 4:
                obj.delete_at_head();
                break;
            case 5:
                cout << "Specify the position of the Node :";
                cin >> pos;
                obj.delete_at_position(pos);
                break; 
            case 6:
                obj.delete_at_tail();
                break;
            case 7:
                obj.display();
                break;
            case 8:
                cout << "Exiting....!" << endl;
                exit(0);
            default:
                cout << "Invalid Choice \n Please Choose between 1 to 8 " << endl;//error handling       
        }
    }while(choice != 8);//condition to exit the program
    return 0;//return 0 for returning an integer value since main is int type
}
