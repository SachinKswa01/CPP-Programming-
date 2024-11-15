#include<iostream>
using namespace std;
int main(){
    //matrix by user and transpose?
    int n; int m;
    cout<<"enter ur rows: ";
    cin>>n;
    cout<<"enter ur cols: ";
    cin>>m;
    int a[n][m];
    cout<<"write ur elements : "; 
    for(int i=0; i<n; i++){
     for(int j=0; j<m; j++){
        cin>>a[i][j];
     }
    }cout<<"ur array is: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[j][i]<<" ";
        }cout<<endl;
    }
}