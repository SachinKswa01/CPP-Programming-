#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter ur number: ";
cin>>x;
int product = 1;
for(int i=1; i<=x; i++){
    product*=i;
}cout<<product<<endl;               //when this line is out of loop then it gives only one value that we enter. but when we write this line in the loop then it gives factorial of all the series to our input, like 1 to 5 all.
}