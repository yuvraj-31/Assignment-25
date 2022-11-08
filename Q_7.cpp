/******************************************************************************
7. 7. Define a class Greatest and define instance member function to find Largest among
3 numbers using classes.

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


