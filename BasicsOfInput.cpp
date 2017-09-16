#include <stdio.h>
/* https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/tutorial/ */
int main()
{
	int n;
	char str[256];
	scanf("%d",&n);
	n = 2*n;
	printf("%d\n",n);
	scanf("%s",&str);
    puts(str);
    return 0;
}
