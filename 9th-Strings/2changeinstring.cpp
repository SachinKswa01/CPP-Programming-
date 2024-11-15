#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Sachin kswa";
    cout<<s[0]<<endl;       // make a change like array.
    cout<<s<<endl;
    s[0]='T';
    s[7]='p';
    cout<<s<<endl;
    cout<<"string is also behave like arrays."<<endl;
}