#include <iostream>
using namespace std;
int main()
{
    int num1, i, j, temp, arr[200];
    cout << "\nEnter number of elements you want to sort:";
    cin >> num1;
    cout << "\nEnter elements here:";
    for (i = 0; i < num1; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < num1; i++)
    {
        for (j = 1 + i; j < num1; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < num1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}