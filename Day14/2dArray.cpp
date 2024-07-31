#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    /*for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        for(int j=0;j<sizeof(arr[i])/sizeof(arr[i][0]);j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
    int sum=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        for(int j=0;j<sizeof(arr[0])/sizeof(arr[0][0]);j++){
            if(i+j==2||i==j){
                sum+=arr[i][j];
            }
        }
    }
    cout<<"Sum of Diagonal : "<<sum;
}
