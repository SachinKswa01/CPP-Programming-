#include<iostream>
using namespace std;
int main(){
    int x[]={2, 4, 45, 6};
    int n= sizeof(x)/4;    // sizeof(arr)/4 is find the value that we insert in our array.
    int mx = x[0];
    for(int i=1; i<n; i++){
        if(x[i]>mx) mx = x[i];
    }cout<<mx<<endl;
}