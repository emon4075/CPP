/*
"+"-------------------> Unary Plus
"-"-------------------> Unary Minus
"++"------------------> Increment
"--"------------------> Decrement
*/
#include <iostream>
using namespace std;
int main()
{
    int x = 10, result;
    // Use of unary plus
    result = +x;
    cout << "Unary Plus is: " << result << endl;
    // Use of unary minus
    result = -x;
    cout << "Unary Minus is: " << result << endl;
    cout << "Increment Decrement Section" << endl;
    cout << --x << endl; // 9
    cout << x++ << endl; // 9
    cout << x << endl;   // 10
    cout << x-- << endl; // 10
    cout << x++ << endl; // 9
    cout << ++x << endl; // 11
    cout << --x << endl; // 10
    cout << x++ << endl; // 10

    return 0;
}