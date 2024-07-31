#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1;
    int max=INT_MIN;
    int n;
    cout<<"Enter Number of Elements:";
    cin>>n;
    cout<<"Enter Elements:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        l1.push_back(x);
        if(x>max){
            max=x;
        }
    }
    cout<<"Maximum Element is "<<max;
}
