#include<stdio.h>
int lcm(int a,int b);
int lcm(int a,int b)
{
	int rem,x,y,l;
	x=a;
	y=b;
	while(b!=0)
	{
	rem=a%b;
	a=b;
	b=rem;
	}
l=x*y/a;
return l;
}
int main()
{
	int x,y,l;
	printf("Enter two numbers");
	scanf("%d%d",&x,&y);
	l=lcm(x,y);
	printf("LCM of %d and %d is %d",x,y,l);
	return 0;
}

