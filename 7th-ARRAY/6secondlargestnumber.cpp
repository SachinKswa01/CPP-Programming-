#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //2nd largest number in this array?
    int arr[]={0,1,-2,3,4,5};
    int n= sizeof(arr)/4;
    int mx = -110;
    int Osum=0;
    for(int i=0; i<n; i++){
        mx = max(mx, arr[i]);
       
    } 
    int smx = -110;
    for(int i=0; i<n; i++){
        if(arr[i] != mx) smx = max(smx, arr[i]);
    }cout<<smx;

}