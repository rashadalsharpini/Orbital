#include <iostream>
#include "Orbital.h"
using namespace std;
int main() {
    Orbital<int> o(3);
    for (int i = 0; i < 17; ++i) {
        o.push(i+1);
    }
    cout<<"Before pop"<<endl;
    o.print();
    cout<<"The popped values is : "<<o.pop()<<endl;
    cout<<"The popped values is : "<<o.pop()<<endl;
    cout<<"After pop"<<endl;
    o.print();
    cout << "\n\n\nHello, World!" << endl;
    return 0;
}
