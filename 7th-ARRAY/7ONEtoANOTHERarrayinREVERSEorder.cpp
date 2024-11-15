#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //copy the contents of one array into another in the revers order.
    int a[]= {1,2,3,4};
    int n=sizeof(a)/4;
    int b[n];
   for(int i=0; i<n; i++){
    b[i] = a[n-1-i];
   cout<<b[i]<<" " ;
   }

}