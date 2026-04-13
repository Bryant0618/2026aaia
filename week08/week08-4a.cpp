#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d%d%d",&a,&b,&c);
	int max=a;
	int min=a;

	if(b>max)max=b;
	if(c>max)max=c;

	if(b<min)min=b;
	if(c<min)min=c;

	printf("%d\n",max-min);
}
