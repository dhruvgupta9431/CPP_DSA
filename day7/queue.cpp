#include<bits/stdc++.h>
using namespace std;
int main() {
    queue<string>q;
    q.push("abha");
    q.push("sabha");
    q.push("mabha");
    while(!q.empty()){
        cout<<'\t'<<q.front();
        q.pop();
    }
    cout<<q.empty();
}

