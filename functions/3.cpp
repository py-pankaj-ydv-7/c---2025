// pass by Reference function.
// in this function we can change the value of actual parameter by using reference operator (&).

#include <iostream>
using namespace std;

void pourChai(int &cups){
    cups = cups +5;
    cout<<"Poured cups:"<<cups<<endl;
}
int main(){
    int chaiCups = 2;
    pourChai(chaiCups);
    cout<<"Total cups are :"<<chaiCups<<endl;

    

    return 0;
}