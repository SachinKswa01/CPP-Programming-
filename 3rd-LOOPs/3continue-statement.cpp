#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=25; i++){
        if(i==3) continue;
        if(i==7) continue;
        if(i==13) continue;
        if(i==17) continue;
        cout<<i<<" ";
    }
}