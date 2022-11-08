/******************************************************************************
6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.

*******************************************************************************/
#include<iostream>
using namespace std;

class Square{
    
  public:
  static int count;
  static void squarecal(int x){
     
    cout<<"Square of the number is "<<x*x<<endl;
    count++;
    
  }
  static void Countcall()
  {
      cout<<"no of times function is call"<<count;
  }
    
};

    int main()
    {
       
       Square::squarecal(8);
       Square::squarecal(16);
       Square::Countcall();
        
        return 0;
    }
