#include<iostream>
using namespace std;
int power(int x, int y){
    if(y==0) return 1;
    return x* power(x, y-1);
}
int main(){
    int x;
    cin>>x;
    int y; 
    cin>>y;
    cout<<"power is "<<power(x, y);
}