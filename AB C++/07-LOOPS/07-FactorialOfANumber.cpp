#include <iostream>
using namespace std;
int main()
{
    long long int N, i, fact = 1;
    cout << "Enter a Number: ";
    cin >> N;
    i = 1;
    do
    {
        fact *= i;
        i++;
    } while (i <= N);
    cout << "Factorial Of " << N << " is: " << fact << endl;
    return 0;
}