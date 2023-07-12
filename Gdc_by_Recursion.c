#include<stdio.h>
int findGcd(int num1,int num2){
if (num2==0){
	return num1;
}	
return findGcd(num2,num1%num2);
}
main(){
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	int gcd = findGcd(num1,num2);
	printf("the gcd is = %d",gcd);
}
