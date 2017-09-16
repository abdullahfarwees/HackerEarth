#include <iostream>
using namespace std;

/* https://www.hackerearth.com/practice/data-structures/arrays/1-d/tutorial/ */

int main()
{
int n;
cin>>n;

int arr[n];

for(int j=0;j<n;j++)
cin>>arr[j];

for(int i=n-1;i>=0;i--)
cout<<arr[i]<<endl;


    return 0;
}
