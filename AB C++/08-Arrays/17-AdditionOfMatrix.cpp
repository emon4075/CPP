#include <iostream>
using namespace std;
int main()
{
    int r1, c1;
    cout << "Enter the formation of matrix 'A'" << endl;
    cin >> r1 >> c1;
    int A[r1][c1];
    int r2, c2;
    cout << "Enter the formation of matrix 'B'" << endl;
    cin >> r2 >> c2;
    int B[r2][c2];
    int C[r1][c2];
    if (r1 == r2 && c1 == c2)
    {
        cout << "Enter Matix-A: " << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << "Enter At Index"
                     << "[" << i << "]"
                     << "[" << j << "] :";
                cin >>
                    A[i][j];
            }
            cout << endl;
        }
        cout << "Enter Matix-B: " << endl;
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << "Enter At Index"
                     << "[" << i << "]"
                     << "[" << j << "] :";
                cin >>
                    B[i][j];
            }
            cout << endl;
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
        cout << "Summation is Matix-C: " << endl;
        for (int i = 0; i < r1; i++)
        {
            cout << "\t\t\t";
            for (int j = 0; j < c1; j++)
            {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Addition is not Possible!" << endl;
        return 0;
    }

    return 0;
}