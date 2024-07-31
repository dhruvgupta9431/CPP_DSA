#include<bits/stdc++.h>
#include "sort.h"
using namespace std;
int main(){
    vector<int>arr;
    int n;
    cout<<"Enter the Number of Elements:";
    cin>>n;
    cout<<"Enter Elements:";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sorting sort(arr);
    sort.insertion_sort();
    sort.bubblesort();
    sort.merge_sort();
    sort.selectionsort();
}
