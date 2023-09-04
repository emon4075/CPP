#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize an integer array 'array' with 5 elements
    int array[5] = {1, 2, 3, 4, 5};

    // Print the value of the element at index 4 of the 'array' (which is 5)
    cout << array[4] << endl;

    // Declare and initialize a character array 'ch' with 3 elements
    char ch[] = {'a', 'b', 'c'};

    // Print the value of the element at index 0 of the 'ch' (which is 'a')
    cout << ch[0] << endl;

    // Declare and initialize a float array 'f' with 2 elements
    float f[2] = {1.3, 5.89};

    // Print the value of the element at index 1 of the 'f' (which is 5.89)
    cout << f[1] << endl;

    // Attempt to print the value of the element at index 2 of the 'f', but it's undefined
    cout << f[2]; // Garbage Value

    return 0;
}
