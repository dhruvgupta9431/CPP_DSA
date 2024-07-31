#include<bits/stdc++.h>
using namespace std;
int main()
{
    const char * message {"Hello World!"};
    cout<<"Message: "<<message<<endl; // HEllo World
    //*message = 'B'; // Compile Error
    cout<<"*message :"<<*message<<endl; //H
    //Allow users to modify the string
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    cout<<"message1: "<<message1<<endl; // Bello World!
    return 0;

}
