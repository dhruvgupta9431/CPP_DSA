#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a={1,2,3,4};
    int size=a.size();
    cout<<a.size()<<endl;
    //cout<<"Array at 2: "<<a.at(2);
    //cout<<endl<<"Is array Empty: "<<a.empty();

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at index = "<<a.at(3)<<endl;
    bool trueFalse = a.empty();
    cout<<"True or False: "<<trueFalse;
    bool empty = a.empty();
    cout<<"IS array empty or not: "<<empty;
    cout<<"First element = "<<a.front()<<endl;
    cout<<"Last element: "<<a.back()<<endl;
    return 0;
}


