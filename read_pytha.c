#include <stdio.h>
int main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");
    int i, j;
    int numberArray[3];
    for (i = 0; i < 3; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }
    	printf("Answer is: %d",j=sqrt((numberArray[0]*numberArray[0])+(numberArray[1]*numberArray[1])));
}
