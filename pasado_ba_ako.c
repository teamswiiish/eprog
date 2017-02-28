#include <stdio.h> 
#include <string.h>
struct detail{
	char course[15];
	float grade;
};

struct student{  
	char name[30];
	struct detail info;
}; 

void displayMenu(){
	printf("0 - Exit\n");
	printf("1 - Write to file\n");
	printf("2 - Read file\n");
	printf("3 - Passed\n");
	printf("4 - Failed\n");
	printf("5 - Invalid Grade\n");
}

void writeToFile(){
	FILE *myFile;
	struct student stud;
	myFile = fopen("sample.txt", "a");
	printf("Enter Student Name: ");
	scanf("%s", &stud.name);
	printf("Enter Student Course: ");
	scanf("%s", &stud.info.course);
	printf("Enter Student Grade: ");
	scanf("%f", &stud.info.grade);
	printf("%s %s %.2f\n", stud.name, stud.info.course, stud.info.grade);
	fprintf(myFile, "%s %s %.2f\n", stud.name, stud.info.course, stud.info.grade);	
	fclose(myFile);
}

void readFromFile(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
    if(myFile == NULL){
    	printf("Error: File does not exist");
    	
	}
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
		sscanf(temp, "%s %s %f", &stud.name, &stud.info.course, &stud.info.grade);
		printf("%s %s %f\n", stud.name, stud.info.course, stud.info.grade);
	}
	fclose(myFile);
}

void readpassedFromFile(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
    if(myFile == NULL){
    	printf("Error: File does not exist");
	}
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
		sscanf(temp, "%s %s %f", &stud.name, &stud.info.course, &stud.info.grade);
		if(stud.info.grade>=75 && stud.info.grade<=100){
			printf("%s %s %.2f 'Passed'\n", stud.name, stud.info.course, stud.info.grade);
		}
	}
}

void readfailedFromFile(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
    if(myFile == NULL){
    	printf("Error: File does not exist");
	}
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
		sscanf(temp, "%s %s %f", &stud.name, &stud.info.course, &stud.info.grade);
		if(stud.info.grade<=74 && stud.info.grade>0){
			printf("%s %s %.2f 'Failed'\n", stud.name, stud.info.course, stud.info.grade);
		}
	}
}

void readinvalidFromFile(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
    if(myFile == NULL){
    	printf("Error: File does not exist");
	}
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
		sscanf(temp, "%s %s %f", &stud.name, &stud.info.course, &stud.info.grade);
		if(stud.info.grade<0 || stud.info.grade>100){
			printf("%s %s %.2f 'Invalid Grade'\n", stud.name, stud.info.course, stud.info.grade);
		}
	}
}

int main (){	
    int choice = 1;
    
    displayMenu();
    scanf("%d", &choice);
    while(choice != 0){
    	switch(choice){
    		case 0: 
    			break;
    		case 1: 
    			writeToFile();
    			break;
    		case 2: 
    			readFromFile();
    			break;
    		case 3: 
    			readpassedFromFile();
    			break;
    		case 4: 
    			readfailedFromFile();
    			break;
    		case 5: 
    			readinvalidFromFile();
    			break;
		}
		displayMenu();
    	scanf("%d", &choice);
	}    
} 
