#include <iostream>
#include <vector>
using namespace std;
class Chai {
public:
    //data members (attrubutes)
    string teaName; // name of the tea 
    int servings;  // Number of servings
    vector<string> ingredients ;// list of ingredients for the 

    // Member function 

    void displayChaiDetails(){
        cout<< "Tea  Name: "<<teaName <<endl;
        cout<< "Tea  serving: "<<servings <<endl;
        cout<< " Ingredients: "<<endl;
        for(string ingridient : ingredients){
            cout<< ingridient<< " ";
        }
        cout<<endl;
    }
// private:
// string name;
  


};
int main(){
    cout<<"oop : => Object Oriented Programming "<<endl;

    Chai chaiOne; // yaha jo Chai hai bo hamri class hai , or chaiOne hamare Object hai.
    chaiOne.teaName = "lemon tea ";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Water","lemon","Honey", "tea"};
    
    chaiOne.displayChaiDetails();

    Chai chaiTwo;

    chaiTwo.teaName = " Masala Chai";
    chaiTwo.servings = 3;
    chaiTwo.ingredients = {"Water", "Masala", "Milk", "tea"};

    chaiTwo.displayChaiDetails();

    return 0;

}