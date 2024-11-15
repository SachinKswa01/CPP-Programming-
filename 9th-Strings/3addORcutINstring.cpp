#include<iostream>
#include<string>
using namespace std;
int main(){
   string s="sachin kaswan"; 
   cout<<s<<endl;
   cout<<s.length()<<endl;         //'s.length()' is used for count the length of string.

   s.append(" s/o Mahender singh kswa");  // 's.append' use for addition of multi strings to old string.
    cout<<s<<endl;       
    cout<<s.length()<<endl;
   
    s.push_back('n');           //'s.push_back()' is used for addition of only one charactor from backward in string.
     cout<<s<<endl; 
      cout<<s.length()<<endl;

   s.pop_back();                // 's.pop_back()' used for cut only one charactor from backward in a string.
   cout<<s<<endl; 
      cout<<s.length()<<endl;
    
    s.clear();                  //'s.clear()' used to empty the string.
     cout<<s<<endl; 
      cout<<s.length()<<endl;

}