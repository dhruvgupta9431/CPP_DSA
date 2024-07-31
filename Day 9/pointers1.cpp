#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=10;
    int *j=&i;
    j=&i;
    cout<<*j<<endl;
}
