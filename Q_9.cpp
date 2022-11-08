/******************************************************************************
9. Define a class Circle and define an instance member function to find the area of the
circle.

*******************************************************************************/
#include<iostream>
using namespace std;

class Circle{
    
  public:
  
  static void area(int x){
     
    cout<<"Area of the circle is "<<3.14*x*x<<endl;
   
    
  }
 
    
};

    int main()
    {
       
       Circle::area(8);
       Circle::area(10);
       
        
        return 0;
    }
