#include<iostream>
using namespace std;
int swap(int *a, int *b){
    int temp=*a ;
     *a= *b;
     *b= temp;

}
int main(){
    int x=67;
    int y=93;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
}