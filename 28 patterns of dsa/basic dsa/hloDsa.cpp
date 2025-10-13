// #include <iostream>
// #include <bits/stdc++.h>
// using namespace  std;

// int main(){
    // cout<<"Hello Dsa "<<endl;
    // cout<<"pankaj "<<endl;

    // int a = 5;
    // cout<<a<<endl;
    // int b;
    // int c;
    // cout<<"enter a vlaue";
    // cin>>b;
    // cout<<"enter a vlaue";
    // cin>>c;
    // cout<<"b+c="<<b+c<<endl;

//     int a ,b,c;
//     cout<<"enter a number"<<endl;
//     cin>>a>>b>>c;
//     int product;
//     product = a*b*c;
//     cout<<"product = "<<product;

// int a,b;
// cout<<"enter a number"<<endl;
// cin>>a;
// cout<<"enter a nuber"<<endl;
// cin>>b;

// int avg;
// avg =(a+b)/2;
// cout<<"avg = "<<avg<<endl;

// }

//***** practice Question ****
// 3 numbers input unka product peint karna hai 
// take 2 number input : average print karna hai . 



/******* if else and loops   */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){

    // if else 

    // int n = 9;
    // if(n%2==0){
    //     cout<<"even"<<endl;
    // }
    // else{
    //     cout<<"odd"<<endl;
    // }

    // loop
    // for (int  i = 1; i <= 5; i++)
    // {
    //     cout<<i<<". Gautam 5 baar print hoga "<<endl;
    // }


    /** home work
     *sum of 10 numbers 
     * sum of first 10 even numbers
     * sum of even numbers bw 20 and 40 (both included)
     */

     //sum of 10 numbers 

    //  int sum =0;
    //  for (int i = 0; i <=10; i++)
    //  {
    //     sum=sum+i;
    //     cout<<"sum = "<<sum<<endl;
    //  }


    //sum of first 10 even numbers

    // int sum = 0;
    // int count=0;
    // for (int i = 1; i<=20; i++)
    // {
    //     if(i%2==0){
    //         count++;
    //         cout<<count<<" even no  "<<i<<endl;
    //     }
    // }

    // sum of even numbers bw 20 and 40 (both included)
    int sum=0;
    for (int i = 20; i <=40; i++)
    {
        if(i%2==0){
            sum=sum+i;
            cout<<i<<" sum = "<<sum<<endl;
        }
    }
    
    
}