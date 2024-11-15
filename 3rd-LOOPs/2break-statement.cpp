// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter ur numebr";
//     cin>>x;
//     int f=1;                     //this method start from starting point(1), so it take more steps to solve.
//     for(int i=1; i<x; i++){
//         if(x%i==0) f=i;
//     } cout<<f<<" ";
// }
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter ur number";
    cin>>x;
    for(int i=x/2; i>=1; i--){
        if(x%i==0){
            cout<<i<<endl;
            break;              // to get out the loop immediately.
        }
    }
}