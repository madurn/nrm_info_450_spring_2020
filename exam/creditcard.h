#include <string>
using namespace std;

class CreditCard : public Account {
    private:
        long cardNumber;
        string last10Charges [10];
    public:
        CreditCard(){}
        CreditCard(string, long, double);
        void doCharge(string, double);
        void makePayment(double);
        void display();
};