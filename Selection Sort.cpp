#include <iostream>
using namespace std;
int main()
{
    int num1, i, j, temp, min, arr[100];
    cout << "Enter amount of numbers you want to add:";
    cin >> num1;
    cout << "Enter number here:";
    for (i = 0; i < num1; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < num1; i++)
    {
        int min = i;
        for (j = i + 1; j < num1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for (i = 0; i < num1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}