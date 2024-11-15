#include<iostream>
using namespace std;
int main(){
    int x; int y;
    /*
    when we input the "x" then we make a variable.
    */
    x=483; y=9876;
    cout<<x<<endl;
    cout<<x+y<<endl;
    //now we are use updation method:
    x=67;
    y=98;
    cout<<x<<endl<<y<<endl;
    /*
    in this case we can replace the old valur of x & y; and gives a new value in the varible.*/
    x = 7;              
    cout<<x<<endl;      //x=7
    x = x + 9;          // we also write it like this "x += 9" ;
    cout<<x<<endl;      //x=7+9 =16

    cout<<x++<<endl;     //in this case x is updated after this equation this is  "postincrement" method;
cout<<++x<<endl;     // in this case x is update before it run that mean when the value is comes to x it increases by +1 after then code is run.
                         //x=18 <-- because when x comes to first equation it can update it after runing so the value of x is increased by +1 and then in next equation x is also updated by +1 so value is increase from 16 to 17 and 17 to 18;
}