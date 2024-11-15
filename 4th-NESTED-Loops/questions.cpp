#include<iostream>
using namespace std;
int main(){
    // // make a pattern that show number(123..)?
    // int m;int n;
    // cout<<"enter rows ";
    // cin>>m;
    // cout<<"enter cols ";
    // cin>>n;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<j<<" ";
    //     }cout<<endl;
    // }
    // // make a pattern that show 1111;2222;3333;4444?
    // int m;int n;
    // cout<<"enter rows ";
    // cin>>m;
    // cout<<"enter cols ";
    // cin>>n;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    // //make a number patterns like 1234;1234;1234?
    // int m;
    // int n; cout<<"enter rows "; cin>>m;
    // cout<<"enter cols"; cin>>n;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<j;
    //     }cout<<endl;
    // }
    // // make pattrens of alphabates?
    // int m;
    // int n;
    // cout<<"enter rows ";
    // cin>>m;
    // cout<<"enter cols ";
    // cin>>n;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=n ; j++){
    //         cout<<(char)(j+96)<<" "; // to make capital letter change 96 into 64.
    //     }cout<<endl;
    // }
    // // make a triamgle pattern of capital alphabates?
    // int m;
    // cout<<"enter rows ";
    // cin>>m;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=i; j++){
    //     cout<<(char)(j+64)<<" ";
    //     }cout<<endl;
    // }
    // // make a triangle pattern that show 1; 22; 333; 4444; ?
    // int m; 
    // cout<<"enter rows";
    // cin>>m;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<i;
    //     }cout<<endl;
    // }
    // // make a patterns like this 1; AB; 123; ABC; 1234; ABCD; 12345 ?
    // int m; 
    // cout<<"enter rows"; 
    // cin>>m;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=i; j++){
    //         if(i%2==0){
    //             cout<<(char)(j+96);
    //         }else{
    //             cout<<j;
    //         }
    //     }cout<<endl;
    // }
    // // make flip triangle with numbers?
    // int m;
    // cout<<"enter rows"; 
    // cin>>m;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=m+1-i; j++){
    //         cout<<j;
    //     }cout<<endl;
    // }
    // //make odd number pattern?
    // //==three types of code.
    // int m;
    // cout<<"enter rows";
    // cin>>m;
    // for(int i=1; i<=m;i++){
    //     for(int j=1; j<=i;j++){
    //          cout<<j*2-1<<" ";
    //     }cout<<endl;
    // }
    // for(int i=1; i<=m;i++){
    //     int a=1;
    //     for(int j=1; j<=i;j++){
    //          cout<<a<<" ";
    //          a+=2;
    //     }cout<<endl;
    // }
    // for(int i=1; i<=m;i++){
    //     for(int j=1; j<=2*i-1;j+=2){
    //          cout<<j<<" ";
    //     }cout<<endl;
    // }
    // // ptterns like 1; 23; 456; 78910; ...
    //  int m; 
    // cout<<"enter rows";
    // cin>>m;
    // int n=1;
    // for(int i=1; i<=m; i++){ 
    //     for(int j=1; j<=i; j++){
    //         cout<<n<<" ";
    //         n++;
    //     }cout<<endl;
    // }
    // // pttern like : 1; 01; 101; 0101; 10101;
    //    int m;
    // cout<<"enter rows";
    // cin>>m;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=i; j++){
    //         if((i+j)%2==0){
    //             cout<<1<<" ";
    //         }else{
    //         cout<<0<<" ";
    //         }
    //       }cout<<endl;
    // } 
    // // make a pattern of plus sign(+)?
    // int m;
    // cout<<"enter rows";
    // cin>>m;
    // int mid=m/2+1;
    // for(int i=1; i<=m; i++){     
    //     for(int j=1; j<=m; j++){
    //         if(i==mid || j==mid){
    //             cout<<"* ";
    //         }else{
    //             cout<<"# ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // // a hole rectangle pattern?
    // int m;
    // int n;
    // cout<<"enter rows";
    // cin>>m;
    // cout<<"enter cols";
    // cin>>n;
    // for(int i=1; i<=m; i++){            
    //     for(int j=1; j<=n; j++){
    //         if(i==1 || i==m || j==1 || j==n){
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         } 
    //     }
    //     cout<<endl;
    // }
    // // pattern of stars with shap of X?
    // int m;
    // cout<<"enter ur rows"; 
    // cin>>m;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=m; j++){
    //         if(i==j || i+j == m+1){
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         }
    //     }cout<<endl;
    // }
    // //flip triangle?
    // int m;
    // cout<<"enter rows";
    // cin>>m;
    // for(int i=1; i<=m; i++){ // rows
    //  for(int j=1; j<=m-i; j++){ // spaces
    //      cout<<"  ";
    //  }for(int j=1; j<=i; j++){  //stars
    //      cout<<"* ";
    //  } cout<<endl;
    // }
    //pattern of rohbus?
    int m; 
    cout<<"enter rows"; 
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m-i; j++){
            cout<<"  ";
        }for(int j=1; j<=m; j++){
            cout<<"* ";
        }cout<<endl;
        // for(int j=1; j<=i; j++){
        //    cout<<"  ";
        // }
    } 
            
    
}