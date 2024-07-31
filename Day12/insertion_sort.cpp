#include<bits/stdc++.h>
using namespace std;
int arr[5]={6,9,3,7,1};
void insertion_sort(){
    for(int i=1;i<5;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    insertion_sort();
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
