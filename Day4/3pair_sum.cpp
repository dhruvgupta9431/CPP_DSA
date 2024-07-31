#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[5] ;
    cout<<"Enter the Number of Elements:";
    cin>>n;
    cout<<"Enter Elements:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]=x;
    }
    int value = 7;
    int count = 0 ;
    //pick the first element of the pairs
    for (int i = 0 ; i < 5 ; i ++) {
    //pick second element of the pair along with a[i]
        for (int j = i+1 ; j < 5 ; j++){
            for(int k=j+1;k<5;k++){
                if(a[i] + a [j] + a[k] == value)
           {
                    cout<<a[i]<<" "<<a[j]<<" "<<a
                    count = count + 1 ;

           }
        }
        }
    }
    cout<<"The count of pairs " << value << " is " << count << endl;
}
