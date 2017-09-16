#include<bits/stdc++.h>

/* https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/all-vowels-2/ */

using namespace std;

int main()
{
char ch;
int n;
cin>>n;

char str[n];

int a=0 , e=0, i=0, o=0 ,u=0 ;
for(int i=0; i<n; i++)
{
cin>>str[i];
}

/* process the character */

int ptr = 0;

while( ptr != n)
{
ch = str[ptr];

switch(ch)
{
case 'a' :a++;break;
case 'e' :e++;break;
case 'i' :i++;break;
case 'o' :o++;break;
case 'u' :u++;break;
}

++ptr;

} // end loop

if( a>0 && e>0 && i>0 && o>0 && u>0)
{
cout<<"YES\n";
}
else
{
cout<<"NO\n";
}

return 0;
}