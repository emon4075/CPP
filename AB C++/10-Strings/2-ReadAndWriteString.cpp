#include <iostream>
using namespace std;

int main()
{
    char name[20], str[20];

    cout << "Enter Your Name: ";
    cin.get(name, 20); // Read up to 19 characters into 'name', stopping at a newline or when the buffer is full.
    cout << "Welcome " << name << endl;

    getchar(); // Wait for a single character input (typically Enter key) to clear the newline character from the buffer.
    // cin.ignore(); can also be used
    cout << "Enter Your Name Again: ";
    cin.get(str, 20); // Read up to 19 characters into 'str', stopping at a newline or when the buffer is full.
    cout << "Welcome again " << str << endl;

    return 0;
}

// Alternative Using cin.getline(name,maxsize); this doesn't need getchar() or cin.ignore
/*


#include <iostream>
using namespace std;
int main()
{
    char name[20], str[20];
    cout << "Enter Your Name: ";
    cin.getline(name, 20);
    cout << "Welcome " << name << endl;
    cout << "Enter Your Name Again: ";
    cin.getline(str, 20);
    cout << "Welcome again " << str << endl;
    return 0;
}


*/