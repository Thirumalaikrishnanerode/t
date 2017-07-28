#include<stdio.h>
int main()
{
int i,n,t=0;
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++t;
}
printf("size of %d is %d",n,t);
return 0;
}
