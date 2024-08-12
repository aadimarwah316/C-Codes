#include <iostream>
using namespace std;
int main()
{
    int num1, target, arr[100], i;
    cout << "\nEnter Target Here:";
    cin >> num1;
    for (i = 0; i < 100; i++)
    {
        arr[i] = i;
    }
    int high, mid, low;
    low = 0;
    high = 99;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (mid > target)
        {
            high = mid - 1;
        }
        else if (mid < target)
        {
            low = mid + 1;
        }
        else
        {
            cout << "\nThe target is found at index:" << mid;
            break;
        }
    }
    return 0;
}
