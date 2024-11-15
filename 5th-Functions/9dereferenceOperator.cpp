#include<iostream>
using namespace std;
int main(){
    int x=7;
    int * p=&x;
    cout<<x<<endl;  // this shows value of x without change.
    * p= 48;
    cout<<x<<endl;  // this shows value of x with change by using X's address.
}