#include <iostream>
using namespace std;
 int checkTemperature(int tempreture){
        return tempreture;   
    }

    //declaration
void serveChai(int cups);
void makeChai(){
    cout<< "Boiling Water, adding tea leaves, strainning...";
}

void serveChai(string teaType ="  Masala Tea " ){
    cout<<"Serving"<<teaType<<endl;

}

int main (){
    cout<<"Hello functons !";
   
    int temp = checkTemperature(49);
    cout<<endl;
    // cout << "tempereature is :" << temp << endl;
    // makeChai(); // calling a function
    cout<<endl;
    // serveChai(8);
    // serveChai(" Lemon Tea");
    serveChai();


    return 0;
}

//defination of function
void serveChai (int cups){
    cout<<" Serving "<< cups <<" of chai ";
}