#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    getline(cin,st);
    string word;
    map <string,int> wordset ;
    for (auto x : st)
    {
        if (x == ' ')
        {
            if(wordset.find(word)==wordset.end()){
                wordset[word]=1;
            }
            else{
                wordset[word]++;
            }
            word="";
        }
        else {
            word = word + x;
        }
    }
    for(auto i=wordset.begin();i!=wordset.end();i++){
        cout<<i->first<<" "<<i->second;
        cout<<endl;
    }
}
