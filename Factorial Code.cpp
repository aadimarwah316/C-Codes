#include <iostream>
using namespace std;
int main()
{
    int num1, i, j, res, fac;
    cout << "\nEnter number of test cases:";
    cin >> num1;
    for (i = 0; i < num1; i++)
    {
        cout << "\nEnter the number for which you want to find out the factorial:";
        cin >> fac;
        res = 1;
        for (j = 1; j < fac; j++)
        {
            if (fac == 1)
            {
                cout << "\nThe factorial is:1";
                break;
            }
            res *= (j * (j + 1)) / j;
        }
        cout << "\nThe Factorial is:" << res;
    }
    return 0;
}