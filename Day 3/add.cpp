#include<iostream>
using namespace std;
void add(int num1,int num2);
void sub(int num1,int num2);
void mul(int num1,int num2);
void divi(int num1,int num2);
void rem(int num1,int num2);
int main() {
    int a,b;
    cout<<"Enter Two Number:";
    cin>>a>>b;
    add(a,b);
    sub(a,b);
    mul(a,b);
    divi(a,b);
    rem(a,b);
}
void add(int num1,int num2){
    cout<<"ADDITION : "<<num1+num2<<endl;
}
void sub(int num1,int num2){
    cout<<"SUBTRACTION : "<<num1-num2<<endl;
}
void mul(int num1,int num2){
    cout<<"MULTIPLY : "<<num1*num2<<endl;
}
void divi(int num1,int num2){
    cout<<"DIVISION : "<<num1/num2<<endl;
}
void rem(int num1,int num2){
    cout<<"REMAINDER : "<<num1%num2<<endl;
}
