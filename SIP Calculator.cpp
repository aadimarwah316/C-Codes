#include <iostream>
#include <math.h>
using namespace std;
void SIP()
{
    int investment, years, i;
    float interest, sum = 0, total,returnv;
    cout << "\nenter your investment amount here that has to be invested monhly:";
    cin >> investment;
    cout << "\nenter the total number of years you want to invest for:";
    cin >> years;
    cout << "\nenter the return you are getting on your investment:";
    cin >> returnv;
    interest=((returnv/100)/12);
    for (i = 0; i < years; i++)
    {
        sum += (investment * 12);
    }
    total = investment * (((pow((1 + interest), (years * 12)) - 1) / interest) * (interest + 1));
    cout << "\n money invested till date is:" << sum;
    cout << "\n total money received after maturity is:" << total;
}
int main()
{
    SIP();
    return 0;
}