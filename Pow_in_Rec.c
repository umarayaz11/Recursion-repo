#include<stdio.h>
int findpow(int n,int c)
{
	if(c==0)
	{
		return 1;
	}
	return n*findpow(n,c-1);
}
main(){
	int num1,count;
	scanf("%d%d",&num1,&count);
	int p = findpow(num1,count);
	printf("\n%d",p);
}
