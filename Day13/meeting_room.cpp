#include<bits/stdc++.h>
using namespace std;
int main() {
    bool flag=true;
    vector<vector<int>> meeting={{5,10},{15,20},{21,30}};
    sort(meeting.begin(),meeting.end());
    for(int i=0;i<meeting.size()-1;i++){
        if(meeting[i][1]>=meeting[i+1][0]){
            flag=false;
            break;
        }
        else{
            flag=true;
            }
    }
    if(flag==false){
        cout<<"false";
    }
    else{
        cout<<"true";
    }

}
