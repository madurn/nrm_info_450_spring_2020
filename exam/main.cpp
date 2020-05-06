#include <iostream>
#include <cstring>
#include <string>
#include "account.h"
#include "checking.h"
#include "savings.h"
#include "creditcard.h"
using namespace std;

int mainMenu(double checkingBalance, double savingsBalance, double creditCardBalance);
void transactions (int option, bool& menu, Checking& checking, Savings& savings, CreditCard& creditCard);
string checkAlpha();
int checkInt();
double checkDouble();

int main() {
    string name = "Royston Madu";
    long taxID = 123456;
    double balance = 100;

    int option = 0; 
    bool menu = true; 

    Checking checking (name, taxID, balance);
    Savings savings (name, taxID, balance);
    CreditCard creditCard (name, taxID, balance);

    while (menu) {
        option = mainMenu(checking.Account::getBalance(), savings.Account::getBalance(), creditCard.Account::getBalance());
        transactions(option, menu, checking, savings, creditCard);
    }

    return 0; 
}

int mainMenu(double checkingBalance, double savingsBalance, double creditCardBalance) {
    cout << "Checking balance: $" << checkingBalance << " Savings balance: $" << savingsBalance << " Credit Card balance: $" << creditCardBalance << endl;
    cout << "1. Savings Deposit" << endl;
    cout << "2. Savings Withdrawal" << endl;
    cout << "3. Checking Deposit" << endl;
    cout << "4. Write A Check" << endl;
    cout << "5. Credit Card Payment" << endl;
    cout << "6. Make A Charge" << endl;
    cout << "7. Display Savings" << endl;
    cout << "8. Display Checking" << endl;
    cout << "9. Display Credit Card" << endl;
    cout << "0. Exit" << endl;
    cout << endl;

    bool check = true;
    int option = 0;
    while (check) {
        cout << "Please select a transaction by entering a number: ";
        option = checkInt();

        if (option >= 0 && option <= 9) {
            check = false;
            
            }
        else{
            cout << "Error: you have entered a number outside of the menu option range." << endl;
        }
    }
    return option;
}

string checkAlpha() {
    bool check = true;
    string letters;
    while (check) {        
        getline(cin, letters);
        int n = letters.length();
        char checkArray[n + 1];
        strcpy(checkArray, letters.c_str());

        for (int i = 0; i < n; i++) {
            if (!isalpha(checkArray[i])) {
                cout << "Error: your input contains a non-alphabetic character." << endl;
                cout << "Please enter alphabetic characters (A - Z) only." << endl;
                check = true;
                break;
            }
            else {
                check = false;
            }
        }
    }

    return letters;
}

int checkInt() {
    bool check = true;
    string numbers;
    while (check) {    
        getline(cin, numbers);
        int n = numbers.length();
        char checkArray[n + 1];
        strcpy(checkArray, numbers.c_str());

        for (int i = 0; i < n; i++) {
            if (!isdigit(checkArray[i])) { 
                cout << "Error: your input contains a non decimal digit character." << endl;
                cout << "Please enter decimal digit characters (0 - 9) only." << endl;
                check = true;
                break;
            }
            else {
                check = false;
            }
        }
    }

    return stoi(numbers);
}

double checkDouble() {
    bool check = true;
    string numbers;
    while (check) {
        getline(cin, numbers);
        int n = numbers.length();
        char checkArray[n + 1];
        strcpy(checkArray, numbers.c_str());

        for (int i = 0; i < n; i++) {
            if (checkArray[0] == '.' || checkArray[n-1] == '.') {
                cout << "Error: you have entered an invalid number." << endl;
                cout << "Please enter a number in the correct format." << endl;
                check = true;
                break;
            }
            else if (!isdigit(checkArray[i]) && checkArray[i] != '.') { 
                cout << "Error: your have entered an invalid number." << endl;
                cout << "Please enter a number in the correct format." << endl;
                check = true;
                break;
            }
            else {
                check = false;
            }
        }
    }

    return stod(numbers);
}

void transactions(int option, bool& menu, Checking& checking, Savings& savings, CreditCard& creditCard) {
    double amount = 0;
    int checkNumber = 0;
    string chargeName = "";
    Account* a;
    
    switch (option) {
        case 1:
            cout << "Enter the deposit amount for the savings account: ";
            amount = checkDouble();
            savings.makeDeposit(amount);
            cout << endl;
            break;

        case 2:
            cout << "Enter the withdrawal amount for the savings account:  ";
            amount = checkDouble();
            savings.doWithdraw(amount);
            cout << endl;
            break;

        case 3:
            cout << "Enter the deposit amount for the checking account: ";
            amount = checkDouble();
            checking.makeDeposit(amount);
            cout << endl;
            break;

        case 4:       
            cout << "Enter the check number: ";
            checkNumber = checkInt(); 
            cout << "Enter the amount on the check: ";
            amount = checkDouble();
            checking.writeCheck(checkNumber, amount);
            cout << endl;
            break; 
            

        case 5:
            cout << "Enter the credit card payment amount: ";
            amount = checkDouble();
            creditCard.makePayment(amount);
            cout << endl;
            break;

        case 6:
            cout << "Enter the name of the credit card charge: ";
            chargeName = checkAlpha();
            cout << "Enter the amount of the credit card charge: ";
            amount = checkDouble();
            cout << "okay" << endl;
            creditCard.doCharge(chargeName, amount);
            cout << endl;
            break;

        case 7:
            a = &savings;
            a -> display();
            cout << endl;
            break;

        case 8:
            a = &checking;
            a -> display();
            cout << endl;
            break;

        case 9:
            a = &creditCard;
            a -> display();
            cout << endl; 
            break;
                
        case 0: 
            menu = false;
            break;
    }
}


