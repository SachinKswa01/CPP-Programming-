#include<iostream>
using namespace std;
int main(){
    int x[]={2, 4, 6};
    int n= sizeof(x)/4;    // sizeof(arr)/4 is find the value that we insert in our array.
    int prdct=1;
    for(int i=0; i<n; i++){
        prdct*=x[i];  
    }cout<<prdct<<endl;
}