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
