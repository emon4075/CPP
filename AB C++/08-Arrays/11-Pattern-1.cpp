/*

1 2 3
4 5 6
7 8 9

*/
#include <iostream>
using namespace std;
int main()
{
    int r, c, k = 1;
    cout << "Enter Row & Coloumn: ";
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }

    return 0;
}