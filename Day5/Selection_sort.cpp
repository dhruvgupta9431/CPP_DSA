#include<iostream>
using namespace std;
void selectionsort(int arr1[],int n){
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr1[j]<arr1[index]){
                index=j;
            }
    int temp=arr1[i];
    arr1[i]=arr1[index];
    arr1[index]=temp;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the Number of Elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    selectionsort(arr,n);
    cout<<"After Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
