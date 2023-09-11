// Ye he aam jidigi

/*
#include <iostream>
using namespace std;
void square()
{
    int result = 5 * 5;  // Calculate the square of 5.
    cout << result << endl;  // Output the result.
}
int main()
{
    square();  // Call the 'square' function.
    return 0;  // Return 0 to indicate successful program execution.
}
*/

// Ye he Mentos Jindigi
#include <iostream>
using namespace std;
void square(int a)
{
    int result = a * a;                                      // Calculate the square of the given number 'a'.
    cout << "Square of " << a << " is : " << result << endl; // Output the result.
}
int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    square(num); // Call the 'square' function with the argument 25.
    return 0;
}
