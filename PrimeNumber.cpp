/*Using This code we will check wheter a number is prime or not*/
#include <iostream>
using namespace std;
int main()
{
    int num1, i;
    cout << "Enter a number here to check:";
    cin >> num1;
    if (num1 == 0 || num1 == 1)
    {
        cout << "\n Prime Number";
        
    }
    for (i = 2; i < num1; i++)
    {

        if (num1 % i == 0)
        {

            cout << "\n Not Prime";
            break;
        }
        else
        {
            cout << "\n Prime Number";
            break;
        }
    }
    return 0;
}