/*Using This code we will check wheter a number is prime or not*/
#include<iostream>
using namespace std;
int main(){
    int num1,i,flag;
    cout<<"\nEnter number here to check if a number is prime or not: ";
    cin>>num1;
    for(i=2;i<num1;i++){
        flag=1;
        if(num1%i==0){
            flag=0;
            break;
        }
        
    }
    for(i=2;i<num1;i++){
        if(flag==1){
            cout<<"\nThe number is prime";
            break;
        }
        else{
            cout<<"\nThe number is not prime";
            break;
        }
    }
    return 0;
}
