
#include <iostream>

using namespace std;

class ComplexNumber{
    
    int real;
    int Imaginary;
    
    public:
    
    ComplexNumber(int real,int Imaginary){
        
       this->real = real;
       this->Imaginary = Imaginary;
    }
    
    void plus(ComplexNumber c2){
        real = real + c2.real;
        Imaginary = Imaginary + c2.Imaginary;
    }
    
    void print(){
        cout<<real<<" + "<<"i"<<Imaginary;
    }
    void multiply(ComplexNumber c2){
        int realpart = real*c2.real - Imaginary*c2.Imaginary;
        int Imaginarypart = real*c2.Imaginary + Imaginary*c2.real;
        real =realpart;
        Imaginary = Imaginarypart;
    }
};

int main()
{
   int real1,real2,Imaginary1,Imaginary2;
   
   cout<<"Enter the First Complex Number: ";
   cin>> real1>> Imaginary1;
   cout<<"Enter the Second Complex Number: ";
   cin>> real2>> Imaginary2;
   
   ComplexNumber c1(real1,Imaginary1);
   ComplexNumber c2(real2,Imaginary2);
   
    cout<<"Enter 1 for ADDITION or (2 for MULTIPICATION): ";
   int choice;
   cin>>choice;
   
   if(choice == 1){
       c1.plus(c2);
       c1.print();
   }
   
    else if(choice == 2){
       c1.multiply(c2);
       c1.print();
   }
   else{
       return 0;
       
   }
       
   
}
