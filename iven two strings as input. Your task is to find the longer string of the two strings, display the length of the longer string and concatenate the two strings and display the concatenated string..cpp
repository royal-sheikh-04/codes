/*Given two strings as input. Your task is to find the longer string of the two strings, display the length of the longer string and concatenate the two strings and display the concatenated string.*/

#include <iostream>
using namespace std;

int main() {
	int t;
	string a,b;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>a;
	    cin>>b;
	   if(a.length()>=b.length())
	   {
	       cout<<a.length()<<endl;
	   }else
	   
	       cout<<b.length()<<endl;
	       cout<<a.append(b)<<endl;
	   
	}
	return 0;
}
