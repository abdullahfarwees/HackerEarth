#include<iostream>

/* https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/print-hackerearth/ */

using namespace std;

int h=0,a=0,c=0,k=0,e=0,r=0,t=0;

void fun()
{

	int len;

	char opt;

	cin>>len;
	char str[len];

	
	cin>>str;

	for(int i =0; i < len ;i++)
	{
		//cout<<str[i];
		opt = str[i];
		switch(opt)
		{
		case 'h':++h;
			break;
		case 'a':++a;
			break;
		case 'c':++c;
			break;
		case 'k':++k;
			break;
		case 'e':++e;
			break;
		case 'r':++r;
			break;
		case 't':++t;
			break;
		}
	}

	int set = 0;
	bool flag = true;

	while(flag == true)
	{
		if(h >=2 && a >=2 && c>=1 && k>=1 && e>=2 && r>=2 && t>=1)
		{
			set = set+1;
//cout<<"h"<<h<<"a"<<a<<"c"<<c<<"k"<<k<<"e"<<e<<"r"<<r<<"t"<<t;
			h = h-2;
			a = a-2;
			c = c-1;
			k = k-1;
			e = e-2;
			r = r-2;
			t = t-1;
//if(h >0 && a >0 && c>0 && k>0 && e>0 && r>0 && t>0)

//cout<<"\n\nh"<<h<<"a"<<a<<"c"<<c<<"k"<<k<<"e"<<e<<"r"<<r<<"t"<<t;

		}
		else
		{
		flag = false;
		}

	}

cout<<set;


}

int main()
{

fun();


return 0;
}