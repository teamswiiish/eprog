#include <stdio.h>
int main(){
int i, grades[3], sum=0;
float average = 0.0;
	for(i=0; i<3; i++){
		printf("Enter grade %d: ", i+1);
		scanf("%d", &grades[i]);
	}
	for(i=0; i<3; i++){
		sum+= grades[i];
	}
	average = sum/3;
	printf("The average grade is: %.2f\n", average);
	if(average>= 75){
		printf("Passed");
	}
	else
		printf("Failed");
}
