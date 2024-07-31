#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, num1, j;
    string str1;
    cout << "\nEnter number of test cases:";
    cin >> num1;
    for (i = 0; i < num1; i++)
    {
        cout << "\nEnter string here you want to be reversed:";
        cin >> str1;
        for (j = (str1.size()); j >= 0; j--)
        {
            cout << str1[j] << " ";
        }
    }
    return 0;
}
