//Make a structure to store bank Account information of customer of ABC bank > also make alias

#include <stdio.h>
#include <string.h>

// Define the structure to store bank account information
struct BankAccount {
    char accountNumber[15];
    char accountHolderName[50];
    double balance;
};

// Create a typedef alias for the structure
typedef struct BankAccount BankAccount;

int main() {
    // Create a bank account instance
    BankAccount account1;
    
    // Populate account information
    strcpy(account1.accountNumber, "1234567890");
    strcpy(account1.accountHolderName, "John Doe");
    account1.balance = 5000.0;

    // Display account information
    printf("Account Number: %s\n", account1.accountNumber);
    printf("Account Holder: %s\n", account1.accountHolderName);
    printf("Balance: %.2lf\n", account1.balance);

    return 0;
}
