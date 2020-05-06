#include <iostream>
#include <string>
#include "account.h"
#include "creditcard.h"
using namespace std;

CreditCard::CreditCard(string name, long taxID, double balance) {
    // TODO: change base class members from here
    Account::setName(name);
    Account::setTaxID(taxID);
    Account::setBalance(balance);
}

void CreditCard::doCharge(string name, double amount){
    //adjust the balance and list it as a withdraw in the base class
    double balance = Account::getBalance();
    balance += amount;
    Account::setBalance(balance);
    
    numWithdraws += 1;

    for (int i = 1; i < 11; i++){
        last10Charges[10-i] = last10Charges[10-i-1];

        if (i == 10){
            last10Charges[0] = name;
        }
    }
}

void CreditCard::makePayment(double amount){
    //adjust the balance and list it as a DEPOSIT in the base class
    double balance = Account::getBalance();
    balance -= amount;
    Account::setBalance(balance);
    numDeposits += 1;
}

void CreditCard::display(){
    // display the accounts charges ( name and amount ) and deposit record
    string name = Account::getName();
    long taxID = Account::getTaxID();
    double balance = Account::getBalance();

    cout << "***Credit Card Account Information***" << endl;
    cout << "Account Holder Name: "<< name << endl;
    cout << "TaxID: " << taxID  <<endl;
    cout << "Balance: $" << balance << endl;
    cout << "Number of Deposits: " << numDeposits << endl;
    for (string charge : last10Charges)
    {
        cout << charge << endl;
    }
    cout << endl;    
}