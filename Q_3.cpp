/******************************************************************************
3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.

*******************************************************************************/
#include<iostream>
using namespace std;

class Factorial{
    
  public:
  void factcal (int x){
      int temp=1;
      while(x>0)
      {   
          temp=temp*x;
          x--;
      }
      cout<<"factorial = "<<temp<<endl;
  }
    
};

    int main()
    {
       Factorial a,b;
       a.factcal(8);
       b.factcal(5);
        
        return 0;
    }

