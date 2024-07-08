#include<iostream>
using namespace std;
int main(){
    int num1,num2,i,j,flag;
    cout<<"enter starting point here:";
    cin>>num1;
    cout<<"enter the ending point here:";
    cin>>num2;
    for(i=num1;i<=num2;i++){
        flag=1;
        for(j=2;j<num1;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<i<<" ";
        }
    }
    return 0;
}