#include <string>
using namespace std;

class Checking : public Account {
    private:
        int last10Checks [10] = {0,0,0,0,0,0,0,0,0,0};
    public:
        Checking(){}
        Checking(string, long, double);
        void writeCheck(int, double);
        void display();
};