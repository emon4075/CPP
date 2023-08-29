/*
Certainly, here are the common assignment operators in C++:
1.=
2.+=
3.-=
4.*=
5./=
6.%=
*/
#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 2;
    x += y;
    cout << "X after x+=y: " << x << endl;
    x -= y;
    cout << "X after x-=y: " << x << endl;
    x *= y;
    cout << "X after x*=y: " << x << endl;
    x /= y;
    cout << "X after x/=y: " << x << endl;
    x %= y;
    cout << "X after x%=y: " << x << endl;
    return 0;
}