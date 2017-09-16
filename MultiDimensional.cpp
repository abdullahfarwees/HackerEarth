#include <iostream>
using namespace std;

/* https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/tutorial/ */

int fun()
{
  int m,n;
  cin>>m>>n;
int mat[m][n];

for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
    cin>>mat[i][j];
  }
}


for(int i=0;i<n;i++)
{
  for(int j=0;j<m;j++)
  {
    cout<<mat[j][i]<<" ";
  }
  cout<<endl;
}

}

int main()
{


fun();

    return 0;
}
