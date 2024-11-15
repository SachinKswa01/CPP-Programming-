#include<iostream>
#include<string>
using namespace std;
int main(){
   string s="sachin"; 
   cout<<s<<endl;
   cout<<s.length()<<endl;         //'s.length()' is used for count the length of string.

   s= s + " kswa";                 //"+ opretor"  is also works like 's.append',     
   cout<<s<<endl;
   cout<<s.length()<<endl;   

   s="Jaat "+ s;                  //  but "+" is work on front and back both sides.
   cout<<s<<endl;
   cout<<s.length()<<endl;  
}