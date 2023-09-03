#include <iostream>
using namespace std;
int main()
{
    int i, Sum = 0, N;
    cout << "Enter Last Number: ";
    cin >> N;
    for (i = 1; i <= N; i++)
    {
        Sum += i;
    }
    cout << "Sum of 1 to " << N << " is: " << Sum << endl;
    return 0;
}