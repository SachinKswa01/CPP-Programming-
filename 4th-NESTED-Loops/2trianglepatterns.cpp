#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter rows";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }cout<<endl;
    }
    // // make the triangle flip horizontly.
    // int m;
    // cout<<"enter rows"; 
    // cin>>m;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=m+1-i; j++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }
}