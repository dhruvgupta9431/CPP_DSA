#include<iostream>
using namespace std;
int main(){
    //to find sum of elements in array

    int array[5] = {10,20,30,40,50};
    int sum = 0;
    for (auto x : array )
        sum+=x;
    cout<<"Sum is : " <<sum;

}
