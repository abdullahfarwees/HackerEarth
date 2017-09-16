#include <iostream>
using namespace std;

/* https://www.hackerearth.com/practice/algorithms/searching/linear-search/tutorial/ */

int main()
{
	long long int idx = 0;
	
    long long int size;
    cin>>size;
    
    long long int x;
    cin>>x;
    
    long long int arr[size];
    
    for(long long int i=1;i<=size;i++)
    	cin>>arr[i];
    	
    
    for(long long int i=1;i<=size;i++)
    {
    	if(arr[i] == x)
    	{
    		idx = i;
    	}
    }
    
    cout<<idx<<endl;
    	
    return 0;
}
