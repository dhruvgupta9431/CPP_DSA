/*[ capture clause ] (parameters) -> return-type
{
   definition of method
}
*/


//lambda
#include<iostream>
using namespace std;
int main(){
auto add=[](int a,int b){
return a+b;
};
cout<<"Sum:"<<add(3,4)<<endl; //output = 7
return 0;}
