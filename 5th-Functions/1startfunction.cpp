#include<iostream>
using namespace std;
void name(){
    cout<<"I'm sachin"<<endl;                   //In void fun. "return" can't necessary.
}
void study(){
    cout<<"doing collage with BCA"<<endl;
}
int main(){
    name();                             //these fun. are nice works when they are above the main fun.
    cout<<"very nice sachin"<<endl;
    study();                            //these fun. are nice works when they are above the main fun.
    cout<<"good sachin."<<endl;
}