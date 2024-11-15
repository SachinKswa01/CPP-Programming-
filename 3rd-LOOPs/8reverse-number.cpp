#include<iostream>
using namespace std;
int main(){
    int x; cout<<"enter ur numebr";
    cin>>x;
    int r=0;
    while(x!=0){
        int ld=x%10;     
        r*=10;
        r+=ld;
        x/=10;
    } cout<<r;
}