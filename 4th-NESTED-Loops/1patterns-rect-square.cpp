#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    cout<<"enter rows";
    cin>>m;
    cout<<"enter cols";
    cin>>n;
    for(int i=1; i<=m; i++){                //this is the star patterns.
        for(int j=1; j<n; j++){
            cout<<"* ";
        }
        cout<<"* " <<endl;
    }
}