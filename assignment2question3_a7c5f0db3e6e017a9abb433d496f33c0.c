//Question 3-> create a struct employee and fill it in using pointers, calculate at the end the average salary
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct employee 
{char name[20];
int id;
int salary;
}; // struct creation
int main(){
	int n;
	float a=0;
	printf("How many employees? \n"); 
	scanf("%d",&n);
	for (int i=0; i<n; i++){
	struct employee* pointer=(struct employee *)malloc(n*sizeof(struct employee)); // create a pointer to struct employee
	if (pointer==NULL){
	    printf("No memory \n");
	    return 1;
	}
	char string[30];
	int id, salary;
	printf("Enter employee %d name: \n", i+1); // let user input all the data for each employee by looping
	scanf("%s", string);
	strcpy((pointer+i)->name,string);
	printf("Enter employee %d ID: \n", i+1);
	scanf("%d", &id);
	(pointer+i)->id=id;
	printf("Enter employee %d salary: \n", i+1);
	scanf("%d", &salary);
	(pointer+i)->salary=salary;
	a+=(pointer+i)->salary; // store the summation of the the salaries
	free(pointer);
	}
	float s =a/n; // calculate the average
	printf("\nThe average salary is: %.1f",s);
	return 0;
}