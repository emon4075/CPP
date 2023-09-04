#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter Row & Coloumn: ";
    cin >> r >> c;
    int array[r][c];
    for (auto &x : array)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
        cout << endl;
    }
    cout << "Matrix will be: " << endl;

    for (auto &x : array)
    {
        cout << "\t\t";
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}