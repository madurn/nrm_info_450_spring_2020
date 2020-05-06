#include <iostream>
#include <string>
#include "account.h"
#include "savings.h"
using namespace std;

Savings::Savings(string name, long taxID, double balance) {
    // TODO: change base class members from here
    Account::setName(name);
    Account::setTaxID(taxID);
    Account::setBalance(balance);
}

void Savings::doWithdraw(double amount){
    // adjust the balance and list it as a withdraw in the base class
    double balance = Account::getBalance();
    balance -= amount;
    Account::setBalance(balance);
    
    numWithdraws += 1;
}

void Savings::display(){
    // display the accounts withdrawal and deposit record
    string name = Account::getName();
    long taxID = Account::getTaxID();
    double balance = Account::getBalance();

    cout << "***Savings Account Information***" << endl;
    cout << "Account Holder Name: "<< name << endl;
    cout << "TaxID: " << taxID <<endl;
    cout << "Balance: $" << balance << endl;
    cout << "Number of Deposits: " << numDeposits << endl;
    cout << "Number of Withdrawals: " << numWithdraws << endl;
    cout << endl;
}