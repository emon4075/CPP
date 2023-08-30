#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 6, c;
    c = a & b;
    cout << "BitWise AND is: " << c << endl;
    c = a | b;
    cout << "BiWise OR is: " << c << endl;
    c = a ^ b;
    cout << "BitWise XOR: " << c << endl;
    return 0;
}