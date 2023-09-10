#include <iostream>
using namespace std;
int main()
{
    int x, *p;
    x = 10;
    p = &x;
    cout << "Value of X: " << x << endl;
    cout << "Address of X: " << &x << endl;
    cout << "Address of X: " << p << endl;
    cout << "Address of P: " << &p << endl;
    cout << "Value stored at Pointer: " << *p << endl;
    return 0;
}