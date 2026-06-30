//Program to Create bank account system
#include <stdio.h>
// Structure to hold bank account information
struct BankAccount {
    int accNo;
    char name[50];
    float balance;
};
// Main function to handle bank account operations
int main() {
    struct BankAccount acc;
    int choice;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);
    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);
    acc.balance = 0;
    // Menu-driven interface for bank account operations
    do {
        printf("\n===== Bank Account System =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        // Handle user choice for bank account operations
        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                acc.balance += amount;
                printf("Amount Deposited Successfully!\n");
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if(amount <= acc.balance) {
                    acc.balance -= amount;
                    printf("Withdrawal Successful!\n");
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;
            case 3:
                printf("Account Number: %d\n", acc.accNo);
                printf("Account Holder: %s\n", acc.name);
                printf("Current Balance: %.2f\n", acc.balance);
                break;
            case 4:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } 
    while(choice != 4);
}