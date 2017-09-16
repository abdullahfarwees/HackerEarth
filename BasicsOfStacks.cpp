#include<bits/stdc++.h>

/* https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/tutorial/ */

using namespace std;

int main()
{
int input;
int var;
cin>>var;

stack<int> st;

while(var--)
{
cin>>input;

if(input == 1)
{
	if( st.empty())
	{
		cout<<"No Food"<<endl;
	}
	else
	{
		cout<<st.top()<<endl;
		st.pop();
	}
}
else if(input == 2)
{
	int price;
	cin>>price;
	st.push(price);
}

}



return 0;
}

