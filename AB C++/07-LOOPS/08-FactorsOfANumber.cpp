#include <iostream>
using namespace std;
int main()
{
    int N, i;
    cout << "Enter a Number: ";
    cin >> N;
    cout << "Factors are : " << endl;
    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}