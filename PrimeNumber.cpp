/*Using This code we will check wheter a number is prime or not*/
#include <iostream>
using namespace std;
int main()
{
    int num1, i, flag;
    cout << "\nEnter number here to check if a number is prime or not: ";
    cin >> num1;
    if (num1 == 0 || num1 == 1)
    {
        cout << "Prime Number";
    }
    for (i = 2; i < num1; i++)
    {
        flag = 1;
        if (num1 % i == 0)
        {
            flag = 0;
            break;
        }
    }
    for (i = 2; i < num1; i++)
    {
        if (flag == 1)
        {
            cout << "\n Prime Number";
            break;
        }
        else
        {
            cout << "\nNot a Prime Number";
            break;
        }
    }
    return 0;
}
