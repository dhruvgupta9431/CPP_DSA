#include<bits/stdc++.h>
using namespace std;
int main() {
    stack<int> s;
    int choice=0;
    while(true){
    cout<<"**********MENU************"<<endl;
    cout<<"1.Insertion\n2.Deletion\n3.Top Element\n4.Check Size\n5.End\n";
    cout<<"**************************"<<endl;
    cout<<"Enter the Choice:";
        cin>>choice;
        switch(choice){
        case 1:
            while(true){
                int x;
                cout<<"Enter Element:";
                cin>>x;
                s.push(x);
                cout<<x<<" Successfully Push"<<endl;
                break;
            }

        case 2:
            if(s.empty()){
                cout<<"Stack is Empty";
                break;
            }
            x=s.top();
            s.pop();
            cout<<x<<" Successfully Pop"<<endl;
            break;
        case 3:
            if(s.empty()){
                cout<<"Stack is Empty";
                break;
            }
            x=s.top();
            cout<<"Top Element is "<<x<<endl;
            break;
        case 4:
            x=s.size();
            cout<<"Size of Stack is "<<x<<endl;
            break;
        case 5:
            exit(0);
        default:
            cout<<"Invalid Choice"<<endl;

    }
    cout<<endl<<endl;
    }
    }
