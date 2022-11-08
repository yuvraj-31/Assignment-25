/******************************************************************************
Q_ 1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number

*******************************************************************************/
#include<iostream>
using namespace std;

class complex{
    private:
    int real,imag;
    public:
    void setvalues(int x,int y)
    {
        real=x;
        imag=y;
    }
   void showvalues ()
   {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    
};

    int main()
    {
        complex c1,c2;
        c1.setvalues(2,3);
        c2.setvalues(4,5);
        c1.showvalues();
        c2.showvalues();
        
        return 0;
    }

