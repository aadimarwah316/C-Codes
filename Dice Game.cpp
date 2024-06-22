/*write a code that provide us with a random number on dice 1 and dice 2,take the sum of the numbers and if the sum is greater than 7 then the number is favorable else not favourable*/
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void dice(){
    int dice1,dice2,sum,i;
    srand(time(0));
    dice1=(rand()%6)+1;
    cout<<"\n the number on the first dice is:"<<dice1;
    dice2=(rand()%6)+1;
    cout<<"\n the number on the second dice is:"<<dice2;
    sum=dice1+dice2;
    cout<<"\n the sum on the dice is:"<<sum;
    if(sum>7){
        cout<<"good number";
    }
    else{
        cout<<"the number is not good";
    }
    

    
    

}
int main(){
    dice();
    return 0;
}