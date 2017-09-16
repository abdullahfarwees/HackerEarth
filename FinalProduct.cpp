#include <iostream>
#include <cmath>

using namespace std;

/* https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/ */

long long getPower()
{
	return (pow(10,9)+7);
}

void fun()
{

	long long ans = 1;
	int input;
	int n;
	cin>>n;
	int arr[n];

	for(int k = 0; k< n ; k++)
	{	
		cin>>input;
		if( input > 0 )
		{
			arr[k] = input ;
		}
		
	}
	
	for(int i = 0; i < n; i++)
	ans = ans*arr[i] % getPower();

	cout<<ans;


}


int main()
{
	fun();
	return 0;
}