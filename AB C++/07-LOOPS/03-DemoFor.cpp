#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        cout << i << "-Hello Emon" << endl;
    }

    return 0;
}

/*

#include <iostream>
using namespace std;
int main()
{
    int i=1;
    for (; i <= 10; i++) // Pre Initialized
    {
        cout << i << "-Hello Emon" << endl;
    }

    return 0;

*/

/*

#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    for (;;)
    {
        cout << i+1 << "-Hello Emon" << endl;
        i++;
        if (i == 10)
            break;
    }

    return 0;
}

*/