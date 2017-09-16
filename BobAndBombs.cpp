#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

using namespace std;

/* https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bob-and-bombs-cake-walk/ */

  long long len = 0;
  long long int arr[10000000];
  char str[10000000];


void final_count()
{
int count = 0;
  for(int i=0;i<len;i++)
  {
    if(arr[i] == 1)
    {
      ++count;
    }
  }

cout<<count<<endl;
}

void init_data()
{
  for(int i=0;i<len;i++)
  {
    if(str[i] != 'B')
    {
      arr[i] = 0;
    }
    else
    {
      arr[i] = 2;
    }

  }

}

void parse_data_right(int i)
{
  if(arr[i+1] == 0 && arr[i+2] == 0 && str[i+1] == 'W' && str[i+2] == 'W')
  {
    arr[i+1] = 1;
    arr[i+2] = 1;
  }
  else if( arr[i+1] == 0 && str[i+1] == 'W')
  {
    arr[i+1] = 1;
  }

}

void parse_data_left(int i)
{
  if(arr[i-1] == 0 && arr[i-2] == 0 && str[i-1] == 'W' && str[i-2] == 'W')
  {
    arr[i-1] = 1;
    arr[i-2] = 1;
  }
  else if( arr[i-1] == 0 && str[i-1] == 'W')
  {
    arr[i-1] = 1;
  }

}

int read_data()
{


  cin>>str;

len = strlen(str);


init_data();


  for(int i=0; i<len ; i++)
  {
    if(str[i] == 'B')
    {
      parse_data_left(i);
      parse_data_right(i);
    }
  }

final_count();

}

int main()
{

  int tc;
  cin>>tc;

  for(int i=0;i<tc;i++)
  {
    read_data();
  }

  return 0;
}
