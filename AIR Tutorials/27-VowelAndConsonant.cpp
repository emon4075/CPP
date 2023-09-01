#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a Charectar: ";
    cin >> ch;
    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
    {
        cout << ch << " is a Vowel!" << endl;
    }
    else
    {
        cout << ch << " is a Consonant!" << endl;
    }

    return 0;
}