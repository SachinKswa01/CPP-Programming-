#include<iostream>
using namespace std;
int main(){
    int x[5];       //declaration
    cout<<"enter ur arrays: ";
    for(int i=0; i<5; i++){
        cin>>x[i];
    }
    for(int i=0; i<5; i++){
        cout<<x[i]*2<<" ";

    }
    x[0]= 100;      //updation
    cout<<endl;
      for(int i=0; i<5; i++){
        cout<<x[i]*2<<" ";

    }

}