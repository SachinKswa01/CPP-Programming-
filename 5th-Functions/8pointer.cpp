#include<iostream>
using namespace std;
int main(){
    int x=5; 
    int* p= &x;
    cout<< *p<<endl;  //"*" shows value.
    cout<< &x<<endl;    //"&"shows adderess.
    cout<<& *p<<endl;
}