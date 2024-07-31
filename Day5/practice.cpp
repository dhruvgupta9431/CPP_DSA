#include<iostream>
using namespace std;
void fun1(string str){
    cout<<"To find Character at Specific Index"<<endl;
    cout<<str.at(5)<<endl;
}
void fun2(string str){
    cout<<"To find Substring"<<endl;
    cout<<str.substr(3,4)<<endl;
}
void fun3(string str){
    cout<<"To find Length"<<endl;
    cout<<str.length()<<endl;
}
void fun4(string str){
    cout<<"To insert string at Specific Index"<<endl;
    string str1="School";
    cout<<str.insert(str.length(),str1)<<endl;
}
void fun5(string str){
    cout<<"To erase a string"<<endl;
    cout<<str.erase()<<endl;
}
int main()
{
    string str;
    getline(cin,str);
    fun1(str);
    fun2(str);
    fun3(str);
    fun4(str);
    fun5(str);
}


