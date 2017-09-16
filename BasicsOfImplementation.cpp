#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

void fun()
{

	string str;
	cin>>str;
	
	int len = str.size()-1;
	
	int tmp_arr[9];
	
	for(int i=0;i<=9;i++)
	{
		tmp_arr[i] = 0;
	}
	
	for(int i=0;i<=len;i++)
	{
		tmp_arr[str[i] - '0']++;
	}
	
	for(int i=0;i<=9;i++)
	{
		cout<<i<<" "<<tmp_arr[i]<<endl;
	}

return;
}

int main()
{
fun();
return 0;
}
