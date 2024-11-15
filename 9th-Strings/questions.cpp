#include<iostream>
using namespace std;
int main(){
    // // count vowles in sentence?
    // string s="cow is an animal with four legs";
    // int count =0; 
    // for(int i=0; i<s.length(); i++){
    //     if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
    //         count++;
    //     }
    // }cout<<count;
    // //update a string that cantain positive numbers with 'a'?
    // string s="my name is sachin";
    // for(int i=0; i<s.length(); i++){
    //     if(i%2==0){
    //         s[i] = 'a';
    //     }
    // }cout<<s;
    // count number of digits without using loop?
    int a= 86076443;
    string s = to_string(a);    //'to_string' is used to convert integer into string.
    cout<<s.length()<<endl;
    
}