#include<iostream>
using namespace std;
int main() {
    int num1,num2,num3;
    cout<<"Enter Three Numbers";
    cin>>num1>>num2>>num3;
    if(num1>=num2){
        if(num1>=num3){
            cout<<num1<<" is Greatest";
        }
        else{
            cout<<num3<<" is Greatest";
        }
    }
    else{
        if(num2>=num3){
            cout<<num2<<" is Greatest";
        }
        else{
            cout<<num3<<" is Greatest";
        }

    }
}
