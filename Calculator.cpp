#include <iostream>
using namespace std;

int sum(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int mul(int num1, int num2) {
    return num1 * num2;
}

int divi(int num1, int num2) {
    if(num2 == 0) {
        cerr << "Cannot divide by zero " << endl;
    }
    return num1 / num2;
}

int main() {
    int ch; 
    int num1, num2;
    do {
        cout << "1) Addition " << endl;
        cout << "2) Subtraction " << endl;
        cout << "3) Multiplication " << endl;
        cout << "4) Division " << endl;
        cout << "5) Exit " << endl;
        cout << "Enter Your choice : ";
        cin >> ch;
        if(ch == 5) {
            cout << "Exiting....! " << endl;
                exit(0);
        }
        cout << "Enter two numbers : ";
        cin >> num1 >> num2;
        switch(ch) {
            case 1:
                cout << "Result : " << sum(num1, num2) << endl;
                break;
            case 2:
                cout << "Result : " << sub(num1, num2) << endl;
                break;
            case 3:
                cout << "Result : " << mul(num1, num2) << endl;
                break;
            case 4:
                cout << "Result : " << divi(num1, num2) << endl;
                break;
            case 5:
                cout << "Exiting....! " << endl;
                exit(0);
            default : 
                cout << "Invalid Input " << endl;

        }
    } while(ch != 5);
    return 0;
}