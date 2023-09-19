#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // Define a character array and initialize it with a string containing
    // multiple tokens separated by semicolons
    char s1[] = "x=10;y=20;z=30";

    // Use strtok to tokenize the string s1 using semicolon as the delimiter
    char *token = strtok(s1, ";");

    // Continue tokenization and print each token until there are no more tokens
    while (token != NULL)
    {
        // Print the current token
        cout << token << endl;

        // Get the next token (if any) by passing NULL as the first argument to strtok
        token = strtok(NULL, ";");
    }

    // Return 0 to indicate successful execution
    return 0;
}

/*

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[] = "Sonar Bangla College Burichang";
    char *token = strtok(s1, " ");
    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, " ");
    }

    return 0;
}


*/