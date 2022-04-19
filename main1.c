#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char name[20];
	int id;
	float grade;
} student;

void scanStudent(student *s);
void printStudent(student *s);

int n;   // declaring variable n

int main(void){
	student *ptr;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	ptr = (student *) malloc (sizeof(student) * n);  //allocating memory dynamically
	scanStudent(ptr);
	printStudent(ptr);
	
	return (0);
}

void scanStudent(student *s){
	for(int i=0; s[i].name != '\0'; i++)
	{
		while((getchar()) != '\n');   //clearing keyboard buffer
		printf("Enter the student name: ");
		scanf("%[^\n]",s[i].name); //scanning name
		printf("Enter the student id: ");
		scanf("%d",&s[i].id);  //scanning id
		printf("Enter the student grade: ");
		scanf("%f",&s[i].grade);     //scanning grade
	}
}
void printStudent(student *s){

	for(int i=0; i<n; i++)
		printf("%s %d %.1f\n",s[i].name,s[i].id,s[i].grade);  //printing result
}
