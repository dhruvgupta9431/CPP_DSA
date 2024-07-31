//quick sort
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> arr={10,7,8,9,1,5};
sort(arr.begin(),arr.end(),greater<int>());
cout<<"Sorted array ";
for(int num:arr){
    cout<<num<<" ";

}
return 0;
}
