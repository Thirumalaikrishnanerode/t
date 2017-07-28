#include<stdio.h>
int main()
{
int i,j=1,m,n;
printf("enter the number:\n");
scanf("%d",&m);
printf("enter the power:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
j=j*m;
}
printf("%d^%d = %d",m,n,j);
return 0;
}
