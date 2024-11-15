#include<iostream>
#include<cmath>
using namespace std;
int main(){             //with using "temprary".
    // int x=2; 
    // int y=7;
    // cout<<x<<" "<<y<<endl;
    // int temp=x;
    // x=y; 
    // y=temp;
    // cout<<x<<" "<<y;
//without using temp.
int x=3;
int y=8;
cout<<x<<" "<<y<<endl;
x = x+y;
y = x-y;
x = x-y;
cout<<x<<" "<<y<<endl;
}