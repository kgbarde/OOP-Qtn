#include <iostream>
using namespace std; 

class Customer{

    string name;
    int accnumber,balance;
    static int totalcustomer;  
    static int totalbalance;    
    public:

    Customer(string n,int a,int b){   
       name = n;
       accnumber = a;
       balance = b;
       totalcustomer++ ;
       totalbalance+=balance;  
    }
    void display(){
        cout << name << "  "<< accnumber << "  "<< balance << endl;
    }

    static void accStatic(){    
        cout<<"\nTotal customer : "<<totalcustomer<<endl;
        cout<<"Total Balance : "<<totalbalance<<endl<<endl;
    }
    void deposite(int ammount)
    {
         if (ammount>0){
            balance+=ammount;
            totalbalance+=ammount;
       }
    }
    void withdraw(int ammount){
        if (ammount<=balance&&ammount>0){
            balance-=ammount;
            totalbalance-=ammount;
        }
    }
};
int Customer::totalcustomer=0;
int Customer:: totalbalance=0;
int main() 
{
 Customer A1("Krushna",7,600); 
 Customer A2("Rohan",8,800);
 Customer A3("Nivrutti",9,900);
 
 A1.display();
 A2.display();
 A3.display();

 cout << "\n*****After Deposit or withdraw*****\n" << endl;

 A2.withdraw(500);
 A1.deposite(900);
 
 Customer::accStatic();
}
 

