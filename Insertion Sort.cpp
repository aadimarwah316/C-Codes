#include <iostream>
using namespace std;
int main()
{
    int num1, arr[100], i, j, temp;
    cout << "Enter number of elements youw ant to add in the array:";
    cin >> num1;
    cout << "Enter number here:";
    for (i = 0; i < num1; i++)
    {
        cin >> arr[i];
    }
    for (i = 1; i < num1; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (temp < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (i = 0; i < num1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
