#include<iostream>

using namespace std;
int adiff(int a,int b)
{
    if (a<0)
    {
        a=360+a;
    }
    if (b<0)
    {
        b=360+b;
    }
    
        a=a%360;
        b=b%360;
    
    if (a<360 and b<360)
    {
        if (a>b)
        {
            if ((a-b)>(360-a+b))
            {
                return 360-a+b;
            }
            else
            {
                return a-b;
            }
        }
        else 
        {
            if ((b-a)>(360-b+a))
            {
                return 360-b+a;
            }
        
            else
            {
                    return b-a;
            }
        }
    }   
    else
    {
        return 0;
    }
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
