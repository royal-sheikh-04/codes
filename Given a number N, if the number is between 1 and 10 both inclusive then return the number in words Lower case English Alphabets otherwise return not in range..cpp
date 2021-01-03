#include<iostream>
using namespace std;

class Solution{   
public:
    string isInRange(int N){
        
           switch(N)
        {
            case 1: 
                  return "one";
                  break;
            case 2: 
                  return "two";
                  break;
            case 3:
                  return "three";
                  break;
            case 4:
                  return "four";
                  break;
            case 5:
                  return "five";
                  break;
            case 6:
                  return "six";
                  break;
            case 7:
                  return "seven";
                  break;
            case 8:
                  return "eight";
                  break;
            case 9:
                  return "nine";
                  break;
            case 10:
                  return "ten";
                  break;
            default:
                  return "not in range";
        }
    }
};

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	   int N;
   	   cin>>N;
   	   Solution ob;
   	   cout<< ob.isInRange(N)<<endl;
	   }	
	   return 0;
}

