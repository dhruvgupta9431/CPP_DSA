#include<bits/stdc++.h>
using namespace std;
void print(list<int>l){
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    list<int>l={1,3,5,7,9};
    list<int>l1={2,4,6,8,10};
    cout<<"Original List:\n";
    cout<<"List 1:";
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"List 2:";
    for(auto i:l1){
        cout<<i<<" ";
    }
    cout<<endl;
    int choice=0;
    cout<<"**********MENU************"<<endl;
    cout<<"1.Reverse\n2.Sort\n3.Unique\n4.Empty\n5.Size\n6.Clear\n7.Merge\n8.End\n";
    cout<<"**************************"<<endl;
    while(true){
        cout<<"Enter the Choice:";
        cin>>choice;
        switch(choice){
        case 1:
            l.reverse();
            cout<<"After Reversing:";
            print(l);
            break;
        case 2:
            l.sort();
            cout<<"After Sorting:";
            print(l);
            break;
        case 3:
            l.unique();
            cout<<"After Removing consecutive Duplicate Elements:";
            print(l);
            break;
        case 4:
            if(!l.empty()){
                cout<<"List is Not Empty";
            }
            else{
                cout<<"List is Empty";
            }
            break;
        case 5:
            cout<<"Size of List is :"<<l.size()<<endl;
            cout<<"Elements are:";
            print(l);
            break;
        case 6:
            l.clear();
            cout<<"List is Clear";
            break;
        case 7:
            l.merge(l1);
            cout<<"After Merging:";
            print(l);
            break;
        case 8:
            exit(0);
        default:
            cout<<"Invalid Choice";
        }
        cout<<"Do you want to continue:";
        char c;
        cin>>c;
        if(c!='y'&&c!='Y'){
            break;
        }
    }



}
