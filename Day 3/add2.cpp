#include<iostream>
using namespace std;
void add(int num1,int num2);
void add(int num1,int num2,int num3);
int main() {
    int a,b,c;
    cout<<"Enter Three Numbers";
    cin>>a>>b>>c;
    add(a,b);
    add(a,b,c);
}
void add(int num1,int num2){
    cout<<"ADDITION of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;
}
void add(int num1,int num2,int num3){
    cout<<"ADDITION of "<<num1<<","<<num2<<","<<num3<<" is "<<num1+num2+num3<<endl;
}
//function with same name having different no. of parameter or same no. of parameter with different data types;
//ability of method to exist in many form
//it occur when the


