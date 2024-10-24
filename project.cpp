#include<iostream>
#include<iomanip>
using namespace std;
class Decor
{
    public:
    float total_price = 0;
    int f = 0, t = 0;
    float price = 0, flower = 50, table = 500;

    void wedding();
    void birthday();
    void fresher();
    void seminar();
    void display_wed();
    void adult();
    void kids();
};
void Decor::wedding()
{
    total_price = 0;
    int ch;
    int qty;
    cout << "Add items " << endl;
    do
    {
        cout << left << setw(15) <<  "Item Name" << right << setw(15) << "Price " << endl;
        cout << left << setw(10) << "1)Flowers" << right << setw(20) << flower << endl;
        cout << left << setw(10) << "2)Table" << right << setw(19) << table << endl;
        cout << "3)Proceed to next " << endl;
        cout << "4)Return to Main Menu " << endl;
        cin >> ch;
        switch(ch)
        {
            case 1:
                cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "Item added Flower " << right << setw(20) << "x" << qty << right << setw (20) << flower << endl;
                price = flower*qty;
                total_price += price;
                price = 0;
                cout << right << setw(20) << "Total Price  = " << total_price;
                break;
            case 2:
                cout << "Enter Quantity :";
                cin >> qty;
                t = qty;
                cout << "Item added Table " << endl;
                price = table*qty;
                total_price += price;
                price = 0;
                break;
            case 3:
                display_wed();
                break;
            case 4:
                cout << "Return to Main menu" << endl;
                return;
            default:
                cout << "Invalid input " << endl;
        }
    }while(ch != 4);
}
void Decor::adult()
{
    int ch, qty;
    total_price = 0;
    cout << left << setw(15) <<  "Item Name" << right << setw(15) << "Price " << endl;
    cin >> ch;
    switch(ch)
    {
        case 1:
            cout << "Enter Quantity " << endl;
            cin >> qty;
            price;
            total_price += price;
    }
}
void Decor::birthday()
{
    int ch;
    cout <<"Choose an option " << endl;
    do
    {
        cout << "1) Adult " << endl;
        cout << "2) Kids " << endl;
        cout << "3) Return "<< endl;
        cin >> ch;
        switch(ch)
        {
            case 1:
                adult();
                break;
            case 2:
                kids();
                break;
            case 3:
                cout << "Return to Main Menu" << endl;
                return;
            default:
                cout << "Invalid option " << endl;
        }
    }while(ch != 3);
}
void Decor::display_wed()
{
    cout << "Item Name" << right << setw(20) << "Quantity " << right << setw(20) << "Price " << endl;
    cout << "Flower " << right << setw(20)  << "x" << f << right << setw(20) << flower << endl;//x5
    cout << right << setw(30) << "Total Price = " << total_price << endl;//Flower                   x5      450

    return;
}
int main()
{
    Decor obj;
    int choice;
    cout << "\t\tWelcome to our Stage Decoration Estimator \n\n" << endl;
    do 
    {
        cout << "1) Wedding " << endl;
        cout << "2) Birthday " << endl;
        cout << "3) Fresher Party" << endl;
        cout << "4) Seminar " << endl;
        cout << "5) Exit " << endl;
        cout << "Choose an option :";
        cin >> choice;
        switch(choice)
        {
            case 1:
                obj.wedding();//Ismail
                break;
            case 2:
                obj.birthday();//afreen
                break;
            case 3:
                obj.fresher();//Nusrat
                break;
            case 4:
                obj.seminar();//Yusuf
                break;
            case 5:
                cout << "Exiting......!" << endl;
                exit(0);
            default:
                cout << "Invalid input " << endl;
        }
    }while(choice != 5);
    return 0;
}