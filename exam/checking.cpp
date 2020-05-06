#include <iostream>
#include <string>
#include "account.h"
#include "checking.h"
using namespace std;

Checking::Checking(string name, long taxID, double balance) {
    // TODO: change base class members from here
    Account::setName(name);
    Account::setTaxID(taxID);
    Account::setBalance(balance);
}

void Checking::writeCheck(int checkNum, double amount){
    //adjust the balance and list it as a withdraw in the base class
    double balance = Account::getBalance();
    balance -= amount;
    Account::setBalance(balance);
    
    numWithdraws += 1;
    
    for (int i = 1; i < 11; i++){
        last10Checks[10-i] = last10Checks[10-i-1];

        if (i == 10){
            last10Checks[0] = checkNum;
        }
    }
    
}

void Checking::display(){
    // display the accounts check register (number and amount) and deposit record
    string name = Account::getName();
    long taxID = Account::getTaxID();
    double balance = Account::getBalance();

    cout << "***Checking Account Information***" << endl;
    cout << "Account Holder Name: "<< name << endl;
    cout << "TaxID: " << taxID <<endl;
    cout << "Balance: $" << balance << endl;
    cout << "Last 10 Check Numbers: " << endl;
    for (int check : last10Checks)
    {
        cout << check << endl;
    }
    cout << endl;    
}