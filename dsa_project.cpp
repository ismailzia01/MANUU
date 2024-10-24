#include<iostream>
#include<iomanip>
#include<cstdlib> // For system("cls")

using namespace std;

class Decor
{
public:
    float total_price = 0;
    int quantities[28] = {0}; // Store quantities for different items
	float prices[28] = {50, 500, 1500, 100, 50, 10, 100, 120, 10, 25, 500, 200, 500, 100,
						 200, 50, 10, 50, 60, 5, 40, 250, 10, 1000,500,100};
	string items[28] ={"Flower","Table", "Sofa","Chairs","Lights", "Balloon",
						"Mr_Ms fresher sash", "Letter Foil Balloon",
						"Balloon","Confetti","Sound Box","Chair",
						"Birthday Cake","Birthday Foil Banner",
						"String LED Light","Snow Spray",
						"Candle","Age Candle","Birthday Cap","Balloon ","Ribbon confetti",
						"Mic","Water Bottle","Podium","Table","Chair"};

    void wedding();
    void birthday();
    void fresher();
    void seminar();
    void display_items();
    void add_item(int index, int quantity);
};

void Decor::add_item(int index, int quantity) {
    quantities[index] += quantity;
    total_price += prices[index] * quantity;
    cout << "Added " << items[index] << " x " << quantity << endl;
    cout << "Total price: " << total_price << endl;
}

void Decor::wedding()
{
    cout << endl;
    total_price = 0;
    int ch, qty;

    cout << "Add items for Wedding" << endl;
    do
    {
        cout << left << setw(32) << "Item" << setw(15) << "Price" << endl;
        for (int i = 0; i < 6; i++) { // Display first 5 items for wedding
            cout << left << i + 1 << ") " << setw(30) << items[i] << prices[i] << endl;
        }
        cout << "7) Proceed to Checkout" << endl;
        cout << "8) Return to Main Menu" << endl;
        cin >> ch;

        if (ch >= 1 && ch <= 6) {
            cout << "Enter quantity: ";
            cin >> qty;
            add_item(ch - 1, qty);//wed_add_item(ch-1, qty)
        } else if (ch == 7) {
            display_items();
        } else if (ch == 8) {
            return;
        } else {
            cout << "Invalid input, try again." << endl;
        }

    } while (ch != 8);
}

void Decor::birthday()
{
    cout << endl;
    total_price = 0;
    int ch, qty;

    cout << "Add items for Birthday" << endl;
    do
    {
        cout << left << setw(32) << "Item" << setw(15) << "Price" << endl;
        for (int i = 12; i < 21; i++) { // Display Birthday items
            cout << left << i - 11 << ") " << setw(30) << items[i] << prices[i] << endl;
        }
        cout << "10) Proceed to Checkout" << endl;
        cout << "11) Return to Main Menu" << endl;
        cin >> ch;

        if (ch >= 1 && ch <= 9) {
            cout << "Enter quantity: ";
            cin >> qty;
            add_item(ch + 11, qty); // Offset by 10 for birthday items
        } else if (ch == 10) {
            display_items();
        } else if (ch == 11) {
            return;
        } else {
            cout << "Invalid input, try again." << endl;
        }

    } while (ch != 11);
}

void Decor::fresher()
{
    cout << endl;
    total_price = 0;
    int ch, qty;

    cout << "Add items for Fresher's Event" << endl;
    do
    {
        cout << left << setw(32) << "Item" << setw(15) << "Price" << endl;
        for (int i = 6; i < 12; i++) { // Display Fresher's Event items
            cout << left << i - 5 << ") " << setw(30) << items[i] << prices[i] << endl;
        }
        cout << "7) Proceed to Checkout" << endl;
        cout << "8) Return to Main Menu" << endl;
        cin >> ch;

        if (ch >= 1 && ch <= 6) {
            cout << "Enter quantity: ";
            cin >> qty;
            add_item(ch + 5, qty); // Offset by 4 for fresher items
        } else if (ch == 7) {
            display_items();
        } else if (ch == 8) {
            return;
        } else {
            cout << "Invalid input, try again." << endl;
        }

    } while (ch != 8);
}

void Decor::seminar()
{
    cout << endl;
    total_price = 0;
    int ch, qty;

    cout << "Add items for Seminar" << endl;
    do
    {
        cout << left << setw(32) << "Item" << setw(15) << "Price" << endl;
        for (int i = 21; i < 26; i++) { // Display Seminar items
            cout << left << i-20 << ") " << setw(30) << items[i] << prices[i] << endl;
        }
        cout << "6) Proceed to Checkout" << endl;
        cout << "7) Return to Main Menu" << endl;
        cin >> ch;

        if (ch >= 1 && ch <= 5) {
            cout << "Enter quantity: ";
            cin >> qty;
            add_item(ch + 20, qty);
        } else if (ch == 6) {
            display_items();
        } else if (ch == 7) {
            return;
        } else {
            cout << "Invalid input, try again." << endl;
        }

    } while (ch != 7);
}

void Decor::display_items()
{
	int ch;
    system("cls");//Clears the screen
    cout << left << setw(22) << "Item" << setw(20) << "Quantity" << setw(30) << "Price" << endl;
    for (int i = 0; i < 28; i++) {
        if (quantities[i] > 0) {
            cout << left << setw(22) << items[i] << setw(20) << quantities[i]
                 << setw(30) << quantities[i] * prices[i] << endl;
        }
    }
    cout << "Total Price: " << total_price << endl;
	do
	{
		cout << "1) Calculate Again " << endl;
		cout << "2) Exit " << endl;
		cin >> ch;
		switch(ch)
		{
			case 1:
				return;
				break;
			case 2:
				cout << "Exiting.....!" << endl;
				exit(0);
				break;
			default:
				cout << "Invalid Choice , Please try again " << endl;

		}
	}while(ch != 2);
}

int main() {
    Decor decor;
    int choice;

    do {
        cout << endl;
        cout << "\t\tWelcome to Stage Decoration Cost Estimator" << endl;
        cout << "\t\t------------------------------------------" << endl;
        cout << endl;
        cout << "Select Event Type:" << endl;
        cout << "1) Wedding" << endl;
        cout << "2) Birthday" << endl;
        cout << "3) Fresher's Event" << endl;
        cout << "4) Seminar" << endl;
        cout << "5) Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                decor.wedding();
                break;
            case 2:
                decor.birthday();
                break;
            case 3:
                decor.fresher();
                break;
            case 4:
                decor.seminar();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice, try again!" << endl;
        }
    } while (choice != 5);

    return 0;
}
