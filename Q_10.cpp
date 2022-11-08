/******************************************************************************
10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.

*******************************************************************************/
#include<iostream>
using namespace std;

class Area{
    
  public:
  
  static void circlearea(int x){
     
    cout<<"Area of the circle is "<<3.14*x*x<<endl;
    }
  static void squarearea(int x){
     
    cout<<"Area of the circle is "<<x*x<<endl;
    }
  static void Rectanglearea(int x,int y){
     
    cout<<"Area of the circle is "<<x*y<<endl;
    }
 
    
};

    int main()
    {
       
     Area::squarearea(4);
     Area::circlearea(4);
     Area::Rectangleareaarea(4,5);
       
        
        return 0;
    }
