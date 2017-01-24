#include<stdio.h>
int main(){
	int i, j, num;
	printf("Input Number: ");
	scanf("%d", &num);
	for(j=0; j<num; j++){
		for(i=j; i<num; i++){
			printf("*");
		}
		printf("\n");
	}
		system("pause");
}
