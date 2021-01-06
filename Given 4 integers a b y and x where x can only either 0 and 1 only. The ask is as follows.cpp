#include<iostream>
using namespace std;

int assignValue(int a,int b, int x)
{
	int y;
	int arr[2];
	arr[0]=a;
	arr[1]=b;
	y=arr[x];
}
int main()
{
	int a=5;
	int b=10;
	int x=0;
	
	cout<<"Value of assigned to 'y' is "<<assignValue(a,b,x);
	return 0;
}
