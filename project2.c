/*these lines include necessary header
files for input/output operations (stdio.h)
and dynamic memory allocations (stdlib/h) */
#include <stdio.h>
#include <stdlib.h>

/*this defines a structure account that holds information about each bank Account */
struct Account {
    int accNumber;
    char name[50];
    float balance;
};
  /* this function allows user to 
  create a new bank account by 
  providing account number ,name
  and initial balance */

void createAccount(struct Account *accounts, int *numAccounts) {
    printf("Enter account number: ");
    scanf("%d", &accounts[*numAccounts].accNumber);
    printf("Enter name: ");
    scanf("%s", accounts[*numAccounts].name);
    printf("Enter initial balance: ");
    scanf("%f", &accounts[*numAccounts].balance);
    (*numAccounts)++;
    printf("Account created successfully!\n");
    
}
/* this function allows user to 
  deposit money into an existing
  account by specifying the account
  number and the amount to deposit */

void deposit(struct Account *accounts, int numAccounts) {
    int accNum;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNum);
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accNumber == accNum) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            accounts[i].balance += amount;
            printf("Deposit successful! Current balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found!\n");
}
/* This function allows users
to withdraw money from an existing 
Account by specifying the Account 
number and the amount to withdraw */

void withdraw(struct Account *accounts, int numAccounts) {
    int accNum;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNum);
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accNumber == accNum) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                printf("Withdrawal successful! Current balance: %.2f\n", accounts[i].balance);
            } else {
                printf("Insufficient balance!\n");
            }
            return;
        }
    }
    printf("Account not found!\n");
}
/*this function allows user to
allow to check the Current balance
of an existing Account by specifying 
the Account number */

void checkBalance(struct Account *accounts, int numAccounts) {
    int accNum;
    printf("Enter account number: ");
    scanf("%d", &accNum);
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accNumber == accNum) {
            printf("Current balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found!\n");
}
/* this the main function inside
a do while loop it presents a menu
to the user with options to do
 the banking working system */
int main() {
    struct Account accounts[100];
    int numAccounts = 0;
    int choice;

    do {
        printf("\n\t    MANUU BANK");
        printf("\n\tWELCOME TO MANUU BANK");
        printf("\n\t---------------------\n");
        //printf("\nBank Management System\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        /*The switch statements is used to 
        handle different user choices based
        on the menu options */

        switch (choice) {
            case 1:
                createAccount(accounts, &numAccounts);
                break;
            case 2:
                deposit(accounts, numAccounts);
                break;
            case 3:
                withdraw(accounts, numAccounts);
                break;
            case 4:
                checkBalance(accounts, numAccounts);
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}