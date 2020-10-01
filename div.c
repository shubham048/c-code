#include <stdio.h>
void main()
{
int n,i,j,t,a=0,b=0;
scanf("%d",n);
t=n;
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
	if(t%j==0)
	a++;
	}
if(a%2==0)
break;
t++;
}
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
	if(n%j==0)
	b++;
	}
if(a%2==0)
break;
n--;
}
if(a<b)
printf("%d",a);
else
printf("d",b);
}