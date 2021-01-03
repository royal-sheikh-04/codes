#include <iostream>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>N;
	    int array[N];
	    int sum=0;
	    for(int j=0;j<N;j++)
	    {
	        cin>>array[j];
	    }
	    for(int j=0;j<N;j++)
	    {
	        sum += array[j];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
