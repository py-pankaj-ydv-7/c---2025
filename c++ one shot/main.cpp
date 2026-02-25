#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

class Employee
{
public:
    string name;
    int salary;

    Employee(string name, int salary, int sc)
    { // ye constructor hai , constructor ka naam class ke naam ke barabar hota hai , aur iska return type nahi hota hai .
        this->name = name;
        this->salary = salary;
        this->secretCode = sc;
    }

    void printDetails()
    {
        cout << "The name of the employee is " << this->name << " and salary is " << this->salary << "Dollars" << endl;
    }

    void getSecretCode(){
        cout<<"The secret code of the employee is "<<this->secretCode<<endl;
    }

    private:
    int secretCode ;
};

class Programmer : public Employee{
    public:
    int error;
};

int main()
{
    // cout<<"Pankaj Yadav"<<endl;

    // int a, b, c;
    // short sa = 9;
    // vartable declaration and initialization rule.
    // int _py = 45;
    // cout<<_py<<endl;
    // cout<<sa;
    // cout<<endl;

    // camelCase Notation

    // int marksInMaths = 83;
    // cout<<"The marks of the student in maths is "<<marksInMaths<<endl;
    // cout<<endl;

    // DataType :-
    //  int , long, long long
    //  float , double , long double
    //  char

    // float const score = 45.32; // agar me const float kr dunga to ye value ko change nahi krne dega . error dega
    // double score2 = 45.326;
    // long double score3 = 4646.46664666;
    // score = 6666.76;

    // cout<<"The score is "<<score<<endl;
    // cout<<"The score2 is "<<score2<<endl;
    // cout<<"The score3 is "<<score3<<endl;

    // int  a , b;
    // cout<<"Enter a first number"<<endl;
    // cin>>a;
    // cout<<"Enter b second number"<<endl;
    // cin>>b;
    // cout<<" a is = "<<a<<" and b is ="<<b<<endl;

    // cout<<"a + b is = "<<a + b<<endl;
    // cout<<"a - b is = "<<a - b<<endl;
    // cout<<"a * b is = "<<a * b<<endl;
    // cout<<"a / b is = "<<(float) a / b<<endl; // yaha mene type castging ki hai .
    // cout<<"a % b is = "<<a % b<<endl;

    // conditions

    // int age;

    // cout<<"Enter your age"<<endl;
    // cin>>age;

    // switch (age){
    //     case 12:
    //         cout<<"You are 12 year old"<<endl;
    //         break;
    //     case 18:
    //         cout<<"You are 18 year old"<<endl;
    //         break;
    //     default:
    //     cout<< "You are neither 12 nor 18 year old"<<endl;

    // break hame condintion se bahar nikalne ke liye use krte hai

    // }

    // if(age>150 || age<1){
    //     cout<<"Invalid age"<<endl;
    // }
    // else if(age>=18)
    // {
    //     cout<<" You can vote"<<endl;
    // }
    // else{
    //     cout<<"You can not vote"<<endl;
    // }

    //********************************** loops **********************************

    // tree type of loops : 1. for loop 2. while loop 3. do while loop

    // int index = 0;
    // while(index<34){
    //     cout<<"We are at index number "<<index<<endl;
    //     index = index + 1;
    // }

    // do while ek baar to chalega hi chalega , chahe condition true ho ya false ho .

    // int index = 0;
    // do{
    //     cout<<"We are at index number "<<index<<endl;
    //     index = index + 1;
    // }while(index<34);

    // for loop

    // for(int index =0; index<=34; index++){

    //     cout<<"We are at index number "<<index<<endl;
    // }

    // int a, b;
    // cout<<"Enter a first number"<<endl;
    // cin>>a;

    // cout<<"Enter b second number"<<endl;
    // cin>>b;

    // cout<<"The sum of a and b is "<<sum(a,b)<<endl;

    // int marks[6];
    // for (int i = 0; i<6; i++){
    //     cout<<"Enter the marks of "<<i<<"th student"<<endl;
    //     cin>>marks[i];
    // }

    // cout<< "array values"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
    // cout<<marks[5]<<endl;

    // int arr2d[2][3] ={
    //     {1,2,3},
    //     {4,5,6}
    // };

    // for (int i = 0; i<2; i++){
    //     for(int j = 0; j<3; j++){
    //         cout<<"The value at "<< i <<", "<<j<<" is "<<arr2d[i][j]<<endl;
    //     }

    // }

    // ******************** typcasting .... ********************

    // int a = 343;
    // float b = 87.34;
    // cout<<(float) a/34<<endl;

    // cout<<(int) b;

    //  string name = "PANKAJ YADAV";

    //  cout<<"The name is "<<name<<endl;
    //  cout<<"The name is "<<name.length()<<endl;
    //  cout<<"The name is "<<name.substr(0,3)<<endl;
    //  cout<<"The name is "<<name.substr(2,3)<<endl;

    // int a = 34;
    // int* ptra;
    // ptra = &a;
    // cout<< *ptra<<endl;  // * is dereference operator , ye pointer ke andar jo value hai usko print krne ke liye use hota hai .

    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of a is "<<*ptra<<endl;
    // cout<<"The value of a is "<<&a<<endl;
    // cout<<"The value of a is "<<ptra<<endl;

    Employee har("pankaj constructor", 700000, 98760);
    // har.name = "Pankaj Yadav";
    // har.salary = 1000000;
    // cout<<"The name of the employee is "<<har.name<<" and salary is "<<har.salary<<"Dollars"<<endl;
    har.printDetails();
    // cout<<har.secretCode<<endl;
    har.getSecretCode();

    return 0;
}