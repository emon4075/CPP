#include <iostream>
#include <iomanip>
using namespace std;

// Define a class called Student to store student information
class Student
{
public:
    int id;     // Student ID
    double gpa; // Student GPA
};

int main()
{
    // Create an instance of the Student class for Emon
    Student Emon;
    Emon.id = 4075;  // Set Emon's ID
    Emon.gpa = 5.00; // Set Emon's GPA
    cout << "Datum of  Emon : " << Emon.id << "   " << fixed << setprecision(2) << Emon.gpa << endl;

    // Create an instance of the Student class for Tuhin
    Student Tuhin;
    Tuhin.id = 4074;  // Set Tuhin's ID
    Tuhin.gpa = 5.00; // Set Tuhin's GPA
    cout << "Datum of Tuhin : " << Tuhin.id << "   " << fixed << setprecision(2) << Tuhin.gpa << endl;

    // Create an instance of the Student class for Arfin
    Student Arfin;
    Arfin.id = 4073;  // Set Arfin's ID
    Arfin.gpa = 5.00; // Set Arfin's GPA
    cout << "Datum of Arfin : " << Arfin.id << "   " << fixed << setprecision(2) << Arfin.gpa << endl;
    return 0;
}
