#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<char>a={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','1','2','3','4','5','6','7','8','9','0'};
    string result;
    for(int i=0;i<8;i++){
        result+=a[rand()%a.size()];
    }
    cout<<result;

}
