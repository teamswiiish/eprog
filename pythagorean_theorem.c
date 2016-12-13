#include<stdio.h>
#include<math.h>

main(){
	int a;
	int b;
	int d;
	int e;
	double c;

	printf("Enter a value for a ");
	scanf("%d" ,&a);
	printf("Enter a value for b ");
	scanf("%d",&b);
	d=a*a;
	e=b*b;
	c=d+e;
	printf("%lf", sqrt(c));
}
