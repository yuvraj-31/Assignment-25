/******************************************************************************
4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.

*******************************************************************************/
#include<iostream>
using namespace std;

class LargestNumber{
    
  public:
  void largest (int x,int y,int z){
     if(x>y)
     {
         if(x>z)
         cout<<x<<" is the largest"<<endl;
         else
          cout<<z<<" is the largest"<<endl;
     }
     else{
         if(y>z)
          cout<<y<<" is the largest"<<endl;
          else
          cout<<z<<" is the largest"<<endl;
     }
  }
    
};

    int main()
    {
       LargestNumber a,b;
       a.largest(8,23,2);
       b.largest(1,5,9);
        
        return 0;
    }

