/*
Deff: A perfect number is a positive integer that is equal to the sum of its factors "excluding" the number itself. For example, 6 is a perfect number because when we add all its factors except 6, we get, 1 + 2 + 3 = 6. We get the sum as the number itself. Therefore, 6 is a perfect number.
Smallest perfect number is 6, which is the sum of 1, 2, and 3. Other perfect numbers are 28, 496, and 8,128.
*/

#include <iostream>
using namespace std;
int main()
{
    int N, i, Sum_Perfect;
    cout << "Enter a Number: ";
    cin >> N;
    Sum_Perfect = 0;
    for (i = 1; i < N; i++) // Excluding The Very Own Number
    {
        if (N % i == 0)
        {
            Sum_Perfect += i;
        }
    }
    cout << Sum_Perfect << endl;
    if (Sum_Perfect == N)
    {
        cout << N << " is a Perfect Number!" << endl;
    }
    else
    {
        cout << N << " is not a Perfect Number!" << endl;
    }
    return 0;
}