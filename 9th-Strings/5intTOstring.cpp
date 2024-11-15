#include<iostream>
#include<string>
using namespace std;
int main(){
  int a= 8607644;
  string s = to_string(a);    //'to_string' is used to convert integer into string.
  cout<<s<<endl;
  s+="search";
  cout<<s<<endl;
}