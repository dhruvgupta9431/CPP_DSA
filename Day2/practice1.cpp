#include<bits/stdc++.h>
using namespace std;
void rupees_to_pound(float rupees){
    float pound=0.0094*rupees;
    cout<<"In Pound:"<<pound<<endl;
}
void pound_to_rupees(float pound){
    float rupees=pound/0.0094;
    cout<<"In Rupees:"<<rupees<<endl;
}
void rupees_to_us(float rupees){
    float us=rupees/83.5;
    cout<<"In Us Dollar:"<<us<<endl;
}
void us_to_rupees(float us){
    float rupees=us*83.5;
    cout<<"In Rupees:"<<rupees<<endl;
}
void yaun_to_rupees(float yaun){
    float rupees=yaun*11.48;
    cout<<"In Rupees:"<<rupees<<endl;
}
void rupees_to_yaun(float rupees){
    float yaun=rupees/11.48;
    cout<<"In Yaun:"<<yaun<<endl;
}
//int main(){
    //float rupees;
    //float pound;
    //cout<<"Enter the Money in Rupees:";
    //cin>>rupees;
    //pound=0.0094*rupees;
    //cout<<"In Pound:"<<pound<<endl;
    //cout<<"Enter the Money in Pound:";
    //cin>>pound;
    //rupees=pound/0.0094;
    //cout<<"In Rupees:"<<rupees;
//}

int main(){
    int choice;
    float rupees,pound,us,yaun;
    cout<<"**********MENU************"<<endl;
    cout<<"1.Rupees To Pound\n2.Pound To Rupees\n3.Rupees To Us Dollar\n4.Us Dollar To Rupees\n5.Rupees To Yaun\n6.Yaun To Rupees\n";
    cout<<"**************************"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
    case 1:
        cout<<"Enter amount in Rupees: ";
        cin>>rupees;
        rupees_to_pound(rupees);
        break;
    case 2:
        cout<<"Enter amount in Pound: ";
        cin>>pound;
        pound_to_rupees(pound);
        break;
    case 3:
        cout<<"Enter amount in Rupees: ";
        cin>>rupees;
        rupees_to_us(rupees);
        break;
    case 4:
        cout<<"Enter amount in Us Dollar: ";
        cin>>us;
        us_to_rupees(us);
        break;
    case 5:
        cout<<"Enter amount in Rupees: ";
        cin>>rupees;
        rupees_to_yaun(rupees);
        break;
    case 6:
        cout<<"Enter amount in Yaun: ";
        cin>>yaun;
        yaun_to_rupees(pound);
        break;
    default:
        cout<<"Invalid Choice";
    }

}

