#include<iostream>
#include<iomanip>
using namespace std;
class Decor
{
    public:
    float total_price = 0;
    int f = 0, t = 0;
    float price = 0, Flower = 50, Table = 500, Sofa = 1500, Chairs = 100, Lights = 50 ;
    float Mr_Ms_fresher_sash =100, letter_foil_balloon =120, balloon =10, confetty= 25, sound_box =500,chair=200;
    float Birthday_Cake=500, Birthday_Foil_Banner=100, String_LED_Lights=200, Latex_Balloon=10, Snow_Spray=50, Candle=10;
    float Cake=350, Age_Candle=50, Birthday_cap=60, Balloon=5, Ribbon_Confetti=40;
    float Mic=250, Water_Bottle=10, podium=1000;

    void wedding();
    void birthday();
    void fresher();
    void seminar();
    void display_seminar();
    void display_wed();
    void display_fresher();
    void display_Birthday();
    void display_adult();
    void display_kids();
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
        cout << left << setw(10) << "1)Flowers" << right << setw(20) << Flower << endl;
        cout << left << setw(10) << "2)Table" << right << setw(19) << Table << endl;
        cout << left << setw(10) << "3)Sofa" << right << setw(19) <<Sofa  << endl;
        cout << left << setw(10) << "4)Chairs" << right << setw(19) << Chairs << endl;
        cout << left << setw(10) << "5)Lights" << right << setw(19) <<Lights << endl;
        cout << "6)Proceed to next " << endl;
        cout << "7)Return to Main Menu " << endl;
        cin >> ch;
        switch(ch)
        {
            case 1:
                cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "Item added Flower " << right << setw(20) << "x" << qty << endl;
                price = Flower*qty;
                total_price += price;
                price = 0;
                cout << right << setw(20) << "Total Price  = " << total_price << endl;
                break;
            case 2:
                cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "Item added Table " << endl;
                price = Table*qty;
                total_price += price;
                price = 0;
                break;
            case 3:
                cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "Item added Sofa " << endl;
                price = Sofa*qty;
                total_price += price;
                price = 0;
                break;
			case 4:
                cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "Item added Chairs  " << endl;
                price =Chairs*qty;
                total_price += price;
                price = 0;
                break;
			case 5:
                cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "Item added Lights" << endl;
                price =Lights*qty;
                total_price += price;
                price = 0;
                break;
            case 6:
                display_wed();
                break;
            case 7:
                cout << "Return to Main menu" << endl;
                return;
            default:
                cout << "Invalid input " << endl;
        }
    }while(ch != 7);
}
void Decor::display_wed()
{
    cout << "Item Name" << right << setw(20) << "Quantity " << right << setw(20) << "Price " << endl;
    cout << "Flower " << right << setw(20) << f << right << setw(20) << Flower*f << endl;
    cout << "Table" << right << setw(20) << f << right << setw(20) <<Table*f << endl;
    cout << "Sofa " << right << setw(20) << f << right << setw(20) <<Sofa*f  << endl;
    cout << "Chairs" << right << setw(20) << f << right << setw(20) <<Chairs*f  << endl;
    cout << "Lights " << right << setw(20)  << f << right << setw(20) <<Lights  << endl;
    return;
}
void Decor::adult()
{
    int ch, qty;
    total_price = 0;
    cout << "Added items " << endl;
    do
    {
        cout << left << setw(15) <<  "Item Name" << right << setw(15) << "Price " << endl;
        cout << left << setw(15) <<  "1)Birthday Cake" << right << setw(15) << Birthday_Cake << endl;
        cout << left << setw(15) <<  "2)Birthday Foil Banner" << right << setw(8) << Birthday_Foil_Banner << endl;
        cout << left << setw(15) <<  "3)String LED lights" << right << setw(11) << String_LED_Lights<< endl;
        cout << left << setw(15) <<  "4)Latex Balloon" << right << setw(15) << Latex_Balloon << endl;
        cout << left << setw(15) <<  "5)Snow Spray" << right << setw(15) << Snow_Spray << endl;
        cout << left << setw(15) <<  "6)Candle" << right << setw(15) << Candle << endl;
        cin >> ch;
    switch(ch)
    {
        case 1:
                cout << "Enter Quantity :";
                cin >> qty;
                price;
                cout << "Birthday Cake " << right << setw(20) << "a" << qty << endl;
                price = Birthday_Cake*qty;
                total_price += price;
                price = 0;
                cout << right << setw(20) << "Total Price  = " << total_price;
                break;
        case 2:
                cout << "Enter Quantity :";
                cin >> qty;
                price;
                cout << "Birthday Foil Banner " << right << setw(20) << "b" << qty << endl;
                price =Birthday_Foil_Banner *qty;
                total_price += price;
                price = 0;
                cout << right << setw(20) << "Total Price  = " << total_price;
                break;
		case 3:
                cout << "Enter Quantity :";
                cin >> qty;
                price;
                cout << "String LED lights " << right << setw(20) << "b" << qty << endl;
                price = String_LED_Lights*qty;
                total_price += price;
                price = 0;
                cout << right << setw(20) << "Total Price  = " << total_price;
                break;
     	case 4:
                cout << "Enter Quantity :";
                cin >> qty;
                price;
                cout << "Latex Balloon " << right << setw(20) << "b" << qty << endl;
                price = Latex_Balloon*qty;
                total_price += price;
                price = 0;
                cout << right << setw(20) << "Total Price  = " << total_price;
                break;
		case 5:
                cout << "Enter Quantity :";
                cin >> qty;
                price;
                cout << "Snow Spray " << right << setw(20) << "a" << qty << endl;
                price = Snow_Spray*qty;
                total_price += price;
                price = 0;
                cout << right << setw(20) << "Total Price  = " << total_price;
                break;
		case 6:
                cout << "Enter Quantity :";
                cin >> qty;
                price;
                cout << "Candle" << right << setw(20) << "b" << qty << endl;
                price = Candle*qty;
                total_price += price;
                price = 0;
                cout << right << setw(20) << "Total Price  = " << total_price;
                break;
		case 7:
                display_adult();
                break;
            case 8:
                cout << "Return to Main menu" << endl;
                return;
            default:
                cout << "Invalid input " << endl;
    }
    }	while(ch != 8);
}

void Decor::display_adult()
{
    cout << "Item Name" << right << setw(20) << "Quantity " << right << setw(20) << "Price " << endl;
    cout << "Birthday Cake " << right << setw(20) << f << right << setw(20) << Birthday_Cake*f << endl;
    cout << "Birthday Foil Banner " << right << setw(20) << f << right << setw(20) <<Birthday_Foil_Banner*f << endl;
    cout << "String LED Lights " << right << setw(20) << f << right << setw(20) << String_LED_Lights << endl;
    cout << "Latex Balloon " << right << setw(20) << f << right << setw(20) <<Latex_Balloon  << endl;
    cout << "Snow Spray " << right << setw(20)  << f << right << setw(20) <<Snow_Spray  << endl;
    cout << "Candle " << right << setw(20) << f << right << setw(20) <<Candle  << endl;
    return;
}
void Decor::kids()
{
    int ch, qty;
    total_price = 0;
    do
    {
        cout << left << setw(15) <<  "Item Name" << right << setw(15) << "Price " << endl;
        cout << left << setw(15) <<  "1)Cake" << right << setw(15) << Cake << endl;
        cout << left << setw(15) <<  "2)Age Candle" << right << setw(15) << Age_Candle << endl;
        cout << left << setw(15) <<  "3)Birthday cap" << right << setw(15) << Birthday_cap<< endl;
        cout << left << setw(15) <<  "4)Balloon" << right << setw(15) << Balloon<< endl;
        cout << left << setw(15) <<  "5)Ribbon Confetti" << right << setw(15) << Ribbon_Confetti << endl;
        cin >> ch;
        switch(ch)
        {
            case 1:
                    cout << "Enter Quantity :";
                    cin >> qty;
                    price;
                    cout << "Cake" << right << setw(20) << "a" << qty << endl;
                    price = Cake*qty;
                    total_price += price;
                    price = 0;
                    cout << right << setw(20) << "Total Price  = " << total_price;
                    break;
            case 2:
                    cout << "Enter Quantity :";
                    cin >> qty;
                    price;
                    cout << "Age Candle" << right << setw(20) << "b" << qty << endl;
                    price = Age_Candle*qty;
                    total_price += price;
                    price = 0;
                    cout << right << setw(20) << "Total Price  = " << total_price;
                    break;
		        case 3:
                    cout << "Enter Quantity :";
                    cin >> qty;
                    price;
                    cout << "Birthday cap" << right << setw(20) << "b" << qty << endl;
                    price =Birthday_cap*qty;
                    total_price += price;
                    price = 0;
                    cout << right << setw(20) << "Total Price  = " << total_price;
                    break;
         	case 4:
                    cout << "Enter Quantity :";
                    cin >> qty;
                    price;
                    cout << "Balloon" << right << setw(20) << "b" << qty << endl;
                    price =Balloon*qty;
                    total_price += price;
                    price = 0;
                    cout << right << setw(20) << "Total Price  = " << total_price;
                    break;
    		case 5:
                    cout << "Enter Quantity :";
                    cin >> qty;
                    price;
                    cout << "Ribbon Confetti " << right << setw(20) << "b" << qty << endl;
                    price =Ribbon_Confetti*qty;
                    total_price += price;
                    price = 0;
                    cout << right << setw(20) << "Total Price  = " << total_price;
                    break;

    		case 6:
                    display_kids();
                    break;
                case 7:
                    cout << "Return to Main menu" << endl;
                    return;
                default:
                    cout << "Invalid input " << endl;
            }
    }while(ch != 5);
}

void Decor::display_kids()
{
    cout << "Item Name" << right << setw(20) << "Quantity " << right << setw(20) << "Price " << endl;
    cout << " Cake " << right << setw(20) << f << right << setw(20) << Cake*f << endl;
    cout << " Age_Candle " << right << setw(20) << f << right << setw(20) <<Age_Candle*f<< endl;
    cout << " Birthday Cap" << right << setw(20) << f << right << setw(20) << Birthday_cap*f << endl;
    cout << " Balloon" << right << setw(20) << f << right << setw(20) <<Balloon*f  << endl;
    cout << "Ribbon Confetti " << right << setw(20) << f << right << setw(20) <<Ribbon_Confetti*f<< endl;
    return;
}
void Decor::birthday()
{
    int ch;
    cout <<"Choose an option " << endl;
    do
    {
        cout << "1) Adult " << endl;
        cout << "2) Kids " << endl;
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
void Decor::fresher()
{
    total_price = 0;
    int ch;
    int qty;
    cout << "Add items " << endl;
    do
    {
        cout << left << setw(15) << "Item Name" << right << setw(15) << "Price " << endl;
        cout << left << setw(10) << "1)Mr/Ms fresher sash" << right << setw(20) <<Mr_Ms_fresher_sash << endl;
        cout << left << setw(10) << "2)letter foil balloon" << right << setw(19) << letter_foil_balloon<< endl;
        cout << left << setw(10) << "3)balloon" << right << setw(19) << balloon << endl;
        cout << left << setw(10) << "4)confetty" << right << setw(19) << confetty << endl;
        cout << left << setw(10) << "5)sound box" << right << setw(19) <<sound_box << endl;
        cout << left << setw(10) << "6)chair" << right << setw(19) << chair << endl;
        cout << "7)Proceed to next " << endl;
        cout << "8)Return to Main Menu " << endl;
        cin >> ch;
        switch(ch)
        {
            case 1:
                cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "Mr/Ms fresher sash " << right << setw(20) << "a" << qty << endl;
                price = Mr_Ms_fresher_sash*qty;
                total_price += price;
                price = 0;
                cout << right << setw(20) << "Total Price  = " << total_price;
                break;
            case 2:
                cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "letter foil balloon " << right << setw(20) << "b" << qty << endl;
                price = letter_foil_balloon*qty;
                total_price += price;
                price = 0;
                break;

            case 3:
                cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "balloon " << right << setw(20) << "c" << qty << endl;
                price = letter_foil_balloon*qty;
                total_price += price;
                price = 0;
                break;


            case 4:
			    cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "confetty " << right << setw(20) << "d" << qty<< endl;
                price = confetty*qty;
                total_price += price;
                price = 0;
                break;

			case 5:
			    cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "sound box" << right << setw(20) << "e" << qty<< endl;
                price = sound_box*qty;
                total_price += price;
                price = 0;
                break;

		    case 6:
			    cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "chair" << right << setw(20) << "f" << qty<< endl;
                price = chair*qty;
                total_price += price;
                price = 0;
                break;

            case 7:
                display_fresher();
                break;
            case 8:
                cout << "Return to Main menu" << endl;
                return;
            default:
                cout << "Invalid input " << endl;
        }
    }while(ch != 7);
}
void Decor::display_fresher()
{
    cout << "Item Name" << right << setw(20) << "Quantity " << right << setw(20) << "Price " << endl;
    cout << "Mr_Ms fresher sash " << right << setw(10)  << "a" << f << right << setw(20) <<Mr_Ms_fresher_sash*f << endl;
    cout << "letter foil balloon " << right << setw(10)  << "b" << f << right << setw(20) <<letter_foil_balloon*f << endl;
    cout << "balloon " << right << setw(20)  << "c" << f << right << setw(20) <<balloon*f << endl;
    cout << "confetti " << right << setw(20)  <<"d" << f << right << setw(20) <<confetty*f << endl;
    cout << "sound box " << right << setw(20)  << "e" << f << right << setw(20) <<sound_box*f << endl;
    cout << "chair " << right << setw(20)  << "f" << f << right << setw(20) <<chair*f << endl;

    return;
}
void Decor::seminar()
{
    total_price = 0;
    int ch;
    int qty;
    cout << "Add items " << endl;
    do
    {
        cout << left << setw(15) <<  "Item Name" << right << setw(15) << "Price " << endl << endl;
        cout << left << setw(10) << "1)Mic" << right << setw(20) << Mic << endl;
        cout << left << setw(10) << "2)Table" << right << setw(19) << Table << endl;
        cout << left << setw(10) << "3)chair" << right << setw(19) <<chair  << endl;
        cout << left << setw(10) << "4)Water Bottle" << right << setw(19) << Water_Bottle << endl;
        cout << left << setw(10) << "5)podium" << right << setw(19) << podium << endl;
        cout << "6)Proceed to next " << endl;
        cout << "7)Return to Main Menu " << endl;
        cin >> ch;
        switch(ch)
        {
            case 1:
                cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "Item added Mic " << right << setw(20) << "x" << qty << endl;
                price = Mic*qty;
                total_price += price;
                price = 0;
                cout << right << setw(20) << "Total Price  = " << total_price << endl;
                break;
            case 2:
                cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "Item added table " << endl;
                price = Table*qty;
                total_price += price;
                price = 0;
                break;
            case 3:
                cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "Item added chair " << endl;
                price = chair*qty;
                total_price += price;
                price = 0;
                break;
			case 4:
                cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "Item added Water Bottle  " << endl;
                price =Water_Bottle*qty;
                total_price += price;
                price = 0;
                break;
			case 5:
                cout << "Enter Quantity :";
                cin >> qty;
                f = qty;
                cout << "Item added podium" << endl;
                price =podium*qty;
                total_price += price;
                price = 0;
                break;
            case 6:
                display_wed();
                break;
            case 7:
                cout << "Return to Main menu" << endl;
                return;
            default:
                cout << "Invalid input " << endl;
        }
    }while(ch != 7);
}
void Decor::display_seminar()
{
    cout << "Item Name" << right << setw(20) << "Quantity " << right << setw(20) << "Price " << endl;
    cout << "Mic " << right << setw(20) << f << right << setw(20) << Mic*f << endl;
    cout << "Table" << right << setw(20) << f << right << setw(20) <<Table*f << endl;
    cout << "chair " << right << setw(20) << f << right << setw(20) <<chair*f  << endl;
    cout << "Water Bottle" << right << setw(20) << f << right << setw(20) <<Water_Bottle*f  << endl;
    cout << "podium " << right << setw(20)  << f << right << setw(20) << podium << endl;
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
        cout << "3) Fresher " << endl;
        cout << "4) Seminar " << endl;
        cout << "5) Exit " << endl;
        cout << "Choose an option :";
        cin >> choice;
        switch(choice)
        {
            case 1:
                obj.wedding();
                break;
            case 2:
                obj.birthday();
                break;
            case 3:
                obj.fresher();
            case 4:
                obj.seminar();
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
