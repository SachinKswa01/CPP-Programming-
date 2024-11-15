#include<iostream>
using namespace std;
int main(){
    int a[4][2]={01,80,02,90,03,70,04,60};
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
}