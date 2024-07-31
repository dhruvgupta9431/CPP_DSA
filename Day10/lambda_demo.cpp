#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int y=20;

    auto add = [=](int a)
    {
        return x+y+a;
    };
    cout<<"Sum: "<<add(5)<<endl; //Output sum : 35
    auto addbyref = [&x, &y](int a)
    {
        x=30; //modifying x
        return x+y+a;
    };
    cout<<"Sum by referene: "<<addbyref(5)<<endl; //Output: Sumby reference = 55
    cout<<"X after modifying : "<<x<<endl; //Output: x after modification: 30

    return 0;

}
