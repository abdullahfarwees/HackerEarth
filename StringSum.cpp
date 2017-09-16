#include <iostream>
#include <cstring>

/* https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/string-sum/ */

using namespace std;

int fun()
{
  char ch = 'a';
  int pos;

  char str[1001];
  cin>>str;

  int len = strlen(str);

  int arr[26];

  for(int k=1;k<=26;k++)
  {
    arr[k] = k;
  }

  int sum = 0;

  for(int i=0;i<len;i++)
  {
    pos = str[i]-'a';
    sum = sum + arr[pos+1];
  }

cout<<sum;

}

int main()
{

fun();

  return 0;
}
