#include<iostream>
using namespace std;
int main() {
    int total,attended;
    float percentage;
    cout<<"Enter the Number of Classes Held:";
    cin>>total;
    cout<<"Enter the Number of Classes Attended:";
    cin>>attended;
    percentage=(attended*100.0)/total;
    cout<<"Total Percentage is "<<percentage<<endl;
    if(percentage>=75){
        cout<<"Yes, You are Eligible for exam";
    }
    else{
        cout<<"No, You are NOT Eligible for exam";
    }


}
