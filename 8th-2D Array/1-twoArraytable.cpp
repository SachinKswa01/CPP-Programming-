#include<iostream>
using namespace std;
int main(){
    int a[3][2];
    //col=1  ;  //col-2                         //colmn==  |            //rows = -->
    a[0][0]=0; a[0][1]=1;   //row-1                        v
    a[1][0]=2; a[1][1]=3;   //row-2
    a[2][0]=4; a[2][1]=5;   // row=3
   
    for(int i=0; i<3; i++){         //rows =i
        for(int j=0; j<2; j++){     //colms = j
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
}