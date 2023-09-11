#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    while (1)
    {
        int RandomNumber = rand() % 5 + 1;
        int Number;
        cout << "Enter a Number between 1-5: ";
        cin >> Number;
        if (Number == RandomNumber)
        {
            cout << "You win!!!" << endl;
            break;
        }
        else
        {
            cout << "Guessed wrong.Try again!!!" << endl;
        }
    }

    return 0;
}