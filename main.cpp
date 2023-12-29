#include <iostream>
#include "Orbital.h"
using namespace std;
int main() {
    Orbital<int> o(3);
    o.push(5);
    o.push(6);
    o.push(7);
    o.push(8);
    o.push(9);
    cout<<"before pop"<<endl;
    o.print();
    o.pop();
    o.pop();
    cout<<"after pop"<<endl;
    o.print();
    cout << "\n\n\nHello, World!" << endl;
    return 0;
}
