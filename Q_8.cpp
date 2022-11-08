/******************************************************************************
8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.

*******************************************************************************/
#include<iostream>
using namespace std;

class Rectangle{
    
  public:
  
  static void area(int x,int y){
     
    cout<<"Area of the rectangle is "<<x*y<<endl;
   
    
  }
 
    
};

    int main()
    {
       
       Rectangle::area(8,10);
       Rectangle::area(10,10);
       
        
        return 0;
    }
