// lemda function : framwork me use aate hai .
#include <iostream>
using namespace std;
int main(){
    //lamda function hi hote hai jinka koi naam nahi hota hai..
   auto preparedChai = [](int cups){
        // cout<<"Hello Lamda function !"<<endl;
        cout<<"Preparing "<<cups <<"cup of tea"<<endl;
    }; // yaha par humne call bhi kar diya hai.


    preparedChai(4);
    return 0;
}