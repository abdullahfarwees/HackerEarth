#include<bits/stdc++.h>

/* https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/maximum-occurrence-9/ */

using namespace std;

int main()
{
char str[1001];
//string str;
gets(str);

int size = strlen(str);
//int size = str.size();

int temp[256];

for(int i=0;i<256; i++)
{
 temp[i] = 0;
}

for( int i=0; i<size; i++)
{
 temp[str[i]]++;
}

int pos;
int max = 0;
int maxvar = 0;
char var;

for(int i=0;i<256; i++)
{
 if( temp[i] > max)
 {
  var = str[temp[i]];
  pos = i;
  max = temp[i];
 }
// cout<< temp[i] << " ";

}

printf("%c %d\n",pos, max);

return 0;
}