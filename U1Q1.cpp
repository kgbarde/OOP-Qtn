#include <iostream>
using namespace std;
 class Student{

    public:
     int rollno,mark;
     string name ;

     void display(){
        cout<<"Name:"<<name<<endl
        <<"Roll number:"<<rollno<<endl
        <<"Mark:"<<mark<<endl;
     }
 };
     int main(){

        Student S1;
        S1.name="Krushna";
        S1.rollno=48;
        S1.mark=500;
        S1.display();
     
 }


