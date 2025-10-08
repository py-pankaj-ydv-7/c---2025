#include <iostream>
using namespace std;

// 1. Write a function to print your name 5 times.
void nameFunction (string name){
    for (int i =1; i<=10; i++){
        cout<<i<<" "<<name<<endl;
    }
}
//2. Write a function that takes two numbers and prints their sum.

int sum(int a, int b ){
    return a+b;

}

// Question 3: Write a function to find the square of a number.

int square(int a){
    return a*a;
}

//Question 4:Write a function that takes two integers and returns the maximum.

void printMaximu(int a, int b ){
if (a>b){
    cout << a;
}
else{ 
    cout<<b;
}

}

//Question 5: check even or odd number
void evenOdd(int num){
    if(num%2==0){
        cout<<"even number ";
    }
else{
    cout<<"odd number ";
}
}

//Question 6: function to return cube of a number
int Cube(int num ){
    return num *num *num;
}

//Question 7: print table of a given number

void printTable(int num){
    for (int  i = 1; i <=10; i++)
    {
        cout<<i<<" * "<< num<<" = "<< num*i<<endl;
    }
    
}

//Question 8: factorial of a number

int  factorial(int num){
     int factorial = 1;
    for (int i = 1; i<=num; i++){
       
        
        factorial = factorial *i;
        
    }
    return factorial;

}

//Question 9: Write a function to check whether a number is a prime number or not.
  
//    void primeNum(int num){
//     if(num%2==0){
//         cout<<"not a prime no. "<<num;
//     }
//     else{
//         cout<<"prime no "<<num;
//     }
//    }

void primeNum(int num ){
     
    bool isPrime = true;

    if(num<=1){
        cout<<"num is not prime "<<num<<endl;
        return;

    }
    
    for (int i  = 2; i<num; i++)
    {
        if(num%i==0){
            isPrime = false;
            break;// no need to check further .
          
        }
      }
    
    if(isPrime){
        cout<<"No. is prime no. "<<num<<endl;
    }
    else{
        cout<<"no is not a prime no "<<num<<endl;
    }
    
    
}



int main(){
    // string name = "pankaj";
    // cout<<name;
//    nameFunction("pankaj");
//   cout<<sum(4,878);
    // cout<<square(4);
    // cout<<"printmaximuNOmber ";
    // printMaximu(65,69);

    // evenOdd(7);
    // cout<<"cude = "<< Cube(3);
    
    // printTable(2);
    // printTable(3);
    // printTable(4);
    // cout<<factorial(5);
    primeNum(7);
    primeNum(10);
    primeNum(1);
    primeNum(13);


  return 0;
}