#include<iostream>
#include<string>
using namespace std;
int main(){
    string x;       //here we get input from user by using string
    cout<<"enter  ur string: "<<endl;
    cin>>x;
    string y ="hello";  // here we put our string.
    cout<<x<<endl<<y<<endl;    //here we print these strings.
    cout<<"there is a problem when we get string from user & user take a space b/w two strings then 'cin' cannot take the space, so fristly you try to make a space b/w string let go...:";
    string user;
    cout<<"please give a spce b/w words"<<endl;
    cin>>user;
    cout<<user<<endl;
    cout<<"see that when u give the space b/w words 'cin' cannot take it,so here we use another opretor that is 'getline'.in getline we see our full line with space"<<endl;
    getline(cin,user);
    cout<<user;
    }