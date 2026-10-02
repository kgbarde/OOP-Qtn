#include <iostream>
using namespace std;
 class Rectangle{

    public:
     int length,breadth;

     
     void display(){
        cout<<"Area of rectangle is : "<<length*breadth<<endl;
     }
 };
     int main(){

        Rectangle R1;
        Rectangle R2;

        R1.length = 6;
        R1.breadth = 9;

        R2.length = 4;
        R2.breadth = 7;
  
      R1.display();
      R2.display();
 }


