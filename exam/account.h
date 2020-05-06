#include <iostream>
#include <string>
using namespace std;

class Account {
    private:
        string name_;
        long taxID_;
        double balance_;
    protected:
        int numDeposits = 0;
        int numWithdraws = 0;
    public:
        Account(){};
        Account(string, long, double);
        void setName(string name);
        string getName();
        void setTaxID(long taxID);
        long getTaxID();
        void setBalance(double balance);
        double getBalance();
        void makeDeposit(double);
        virtual void display();
};