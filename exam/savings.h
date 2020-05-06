#include <string>
using namespace std;

class Savings : public Account {
    public:
        Savings(){}
        Savings(string, long, double);
        void doWithdraw(double);
        void display();
};