#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>v;
    cout<<"Enter the Number of Elements:";
    cin>>n;
    cout<<"Enter Elements:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int count=0,max=0;
    int s=0,e=0;
    while(s<n&&e<n){
        if(v[s]==1){
            while(v[e]==1&&e<n){
                e++;
            }
        }
        count=e-s;
        if(count>max){
            max=count;
        }
        s=e+1;
        e=e+1;

}
cout<<max;
}
