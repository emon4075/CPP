#include <iostream>

using namespace std;
int main()
{
    int *ptr1, *ptr2, num1, num2;                // Declare two integer pointers and two integer variables
    cout << "Enter Two Numbers: " << endl;       // Display a message to the user
    cin >> num1 >> num2;                         // Read two integers from the user and store them in num1 and num2
    ptr1 = &num1;                                // Assign the address of num1 to ptr1
    ptr2 = &num2;                                // Assign the address of num2 to ptr2
    cout << "Sum is: " << *ptr1 + *ptr2 << endl; // Calculate and display the sum of num1 and num2
    return 0;                                    // Return 0 to indicate successful program execution
}
