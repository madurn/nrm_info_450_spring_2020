#include <iostream>
#include <string>
#include "account.h"
using namespace std;


Account::Account(string name, long taxID, double balance) {
    name_ = name;
    taxID_ = taxID;
    balance_ = balance;
}

void Account::setName(string name){ 
    // assigns a new value with error checking
    name_ = name; 
}

string Account::getName(){ return name_; }

void Account::setTaxID(long taxID){ 
    // assigns a new value with error checking
    taxID_ = taxID; 
}

long Account::getTaxID(){ return taxID_; }

void Account::setBalance(double balance){ 
    // assigns a new value with error checking
    balance_ = balance; 
}

double Account::getBalance(){ return balance_; }

void Account::makeDeposit(double amount) {
    // adjust the balance and number of deposits variable
    balance_ += amount;
    numDeposits += 1; 
}

void Account::display() {
    // a method to display the name, taxID, and balance
    cout << "***Account Information***" << endl;
    cout << "Account Holder Name: "<< name_ << endl;
    cout << "TaxID: " << taxID_ <<endl;
    cout << "Balance: " << balance_ << endl;
}