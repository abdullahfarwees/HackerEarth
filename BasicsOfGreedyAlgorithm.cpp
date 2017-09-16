#include<bits/stdc++.h>

using namespace std;

int main()
{
int tc;
cin>>tc;

while(tc--)
{
	
int size,cap;
cin>>size>>cap;

int arr[size];
int sum = 0 , count = 0;

for(int i=0;i<size;i++)
{
	cin>>arr[i];
}

sort(arr,arr+size);

for(int i=0;i<size;i++)
{

	if(sum+arr[i+1] <= cap)
	{
		sum += arr[i];
		count++;
	}
	else
	{
		break;
	}

}//end loop
cout<<count<<endl;
}

return 0;
}