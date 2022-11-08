/******************************************************************************
2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.

*******************************************************************************/
#include<iostream>
using namespace std;

class Time{
    private:
    int hr,min,sec;
    public:
    void setvalues(int x,int y=0,int z=0)
    {
        hr=x;
        min=y;
        sec=z;
    }
   void showvalues ()
   {
        cout<<hr<<" Hr "<<min<<" min "<<sec<<" sec "<<endl;
    }
    
};

    int main()
    {
        Time t1,t2;
        t1.setvalues(2,3);
        t2.setvalues(4,5);
        t1.showvalues();
        t2.showvalues();
        
        return 0;
    }

