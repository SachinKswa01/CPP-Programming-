#include<iostream>
using namespace std;
int main(){
    int i;
    while(i=10){                //this is an infinite program. 
        cout<<i<<" ";
        i= i+1;               //.... warning this infinite program might to be crash.
    }
}