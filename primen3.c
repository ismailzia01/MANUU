#include <stdio.h>
#include <stdlib.h>

struct Account {
    int accNumber;
    char name[50];
    float balance;
};

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

int main() {
    struct Account accounts[100];
    int numAccounts = 0;
    int choice;

    do {
        printf("\n\t\t MANNU BANK");
        printf("\nWelcome MANUU Bank Management System\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

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
