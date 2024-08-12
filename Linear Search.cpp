#include <iostream>
using namespace std;
int main()
{
    int num1, i, target, arr[100];
    cout << "\nEnter total number of elements you want to add:";
    cin >> num1;
    cout << "\nEnter number:";
    for (i = 0; i < num1; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Target here:";
    cin >> target;
    for (i = 0; i < num1; i++)
    {
        if (target == arr[i])
        {
            cout << "\nFound at:" << i;
            break;
        }
        else
        {
            cout << "\nNot Found";
        }
    }
    return 0;
}