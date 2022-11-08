/******************************************************************************
5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.

*******************************************************************************/
#include<iostream>
using namespace std;

class ReverseNumber{
    
  public:
  void reverse(int x){
      int temp=0;
    while(x>0)
    {
        temp=(temp*10 )+ (x%10);
        x=x/10;
    }
    cout<<"Reverse of the number is "<<temp<<endl;
  }
    
};

    int main()
    {
       ReverseNumber a,b;
       a.reverse(82345);
       b.reverse(159);
        
        return 0;
    }

