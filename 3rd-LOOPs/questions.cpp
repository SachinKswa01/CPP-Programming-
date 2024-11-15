#include<iostream>
using namespace std;
int main(){
    //   // print numbers from 1 to 100?
    // for(int i=1; i<=100; i++){
    //    cout<<i<<endl;
    // }
    //   // print all the even nummber b/t 1 to 100?
    // for(int i=1; i<= 100; i++){          //this code is looped 100 times, but if we want to looped ony for 50 times then make the change in method 2.
    //     if(i%2==0)cout<<i<<" ";
    // }
    // // method 2 for even number.
    //  for(int i=0; i<=100; i+=2){
    //   if(i%2==0) cout<<i<<" ";
    //  }
    // //print all the odd numbers 1 to 100?
    // for(int i=1; i<=100; i++){
    // if(i%2!=0) cout<<i<<" ";
    // }
    // // print table of 19?
    // for(int i=19; i<=190; i++){
    //    if(i%19==0) cout<<i<<" ";
    // }
    // //print table of "n" by user?
    // int x;
    // cout<<"enter ur number ";
    // cin>>x;
    // for(int i=x; i<=x*10; i+=x){
    //   if(i%x==0) cout<<i<<" ";
    // }
    // // display this AP- 1,3,5,7,9....upto 'n terms?
    // int x;
    // cout<<"enter x: ";
    // cin>>x;
    // for(int i=1; i<=2*x-1; i+=2){          //formula of AP: nth term-- a(nth)= a+ (n-1)d
    //   cout<<i<<" ";
    // }
    // // display AP- 4,7,10,13,16...upto 'n?
    // int x;
    // cout<<"enter x : ";
    // cin>>x;
    // for(int i=4; i<=1+3*x; i+=3){             //formula of AP: nth term-- a(nth)= a+ (n-1)d
    //   cout<<i<<" ";
    // }    BUT IT HAVE ONE ANOTHER EASY METHOD: ~
    // // display AP-  4,7,10,13,16...upto 'n? by method 2: 
    // int x;
    // cout<<"enter x: ";
    // cin>>x;
    // int a=4;
    // for(int i=1; i<=x; i++){
    //   cout<<a<<" ";
    //   a = a+3;          //  3 is the difference and  a is the starting point.
    // }
    // // display GP: 1,2,4,8,16, 32,....upto 'n' terms.
    // int x;
    // cout<<"enter x : ";
    // cin>>x;
    // int a= 1;
    // for(int i=1 ; i<=x; i++){
    //   cout<<a<<" ";
    //   a *=2;
    // }
    // // find which number is prime or composite by using break statement.
    // int x;
    // cout<<"enter number";
    // cin>>x;
    // for(int i=2; i<=x/2; i++){
    //     if(x%i==0){
    //         cout<<"composite"<<endl;
    //         break;
    //     }else{
    //         cout<<"prime";
    //         break;
    //     }
    // }
    // // pritnf the odd numbers using continue statement? 
    // for(int i=1; i<=100; i++){
    //     if(i%2==0) continue;
    //     cout<<i<<" ";
    // }  
    // // when we compair two alphabet like: a<b;
    // while('a'<'b'){                         // this code is infinite because ASCII value of 'a' is always smaller then 'b'.so this is infinite program.
    //     cout<<"Ram Ram jii"<<" ";
    // }
    // // //infinite program.
    // //int i=10;
    // // while(i=20){
    // //     cout<<"ram ramji";
    // // }
    // // solve this problem.
    // int x=4, y=0;
    // while(x>=0){
    //     x--;
    //     y++;
    //     if(x==y)
    //     continue;
    //     else
    //     cout<<x<<" "<<y<<endl;
    // }
    // //a program wich gives us product of given number?
    // int x;
    // cout<<"enter ur numebr";
    // cin>>x;
    // int pd=1;
    // while(x!=0){
    //     int ld= x%10;
    //     x/=10;
    //     pd*=ld;
    // }cout<<pd<<endl;
    // // printf the sum of given number and it reverse.
    // int x;
    // cout<<"enter ur numebr";
    // cin>>x;
    // int rvrs=0;
    // int sum=rvrs+x;
    // while(x!=0){
    //     int ld= x%10;
    //     rvrs*=10;rvrs+=ld;
    //     x/=10;
    // }
    // cout<<rvrs;
    //  // formula of sum from 1 to 'n' === (n*(n+2))/2
    // // print the factorials of first 'n' numbers?
    // int x;
    // cout<<"enter ur number";
    // cin>>x;
    // int product=1;
    // for(int i=1; i<=x; i++){
    //     // if(i == 0){
    //     // product=1 ;
    //     // }else{
    //     //  product*=i;
    //     // }
    //     product*= i;
    // cout<< i <<"!= "<<product<<endl;
    // }
    // // write the program to print all the ASCII values and equilatents of all alphabets using while loop?
    // int x=65;
    // char y = (char)x;
    // while(y<=90){
    //     cout<<x<<"="<<y<<endl;
    //     y++,x++;
    // }
}