#include <iostream>
#include <fstream>
using namespace std;

int main (){
    ofstream out("randoms.txt");

    if (!out) {
        cout << "File cannot be opened." << endl;
        return 1;
    }

    for (int i = 0; i < 1000; i++) {
        int randNum = rand() % 19999 + (-9999);
        out << randNum << endl;
    }

    out.close();

    return 0;    
}