#include<stdio.h>

int main()
{
	unsigned long a ;
	unsigned long b ;
	unsigned long r ;
	int i; 
	scanf("%ld",&a);
	for(i=0;i<3;i++){
	b = a % 10;	
	a /= 10;
	r  += b;
	}
	printf("%lu",r);
}
