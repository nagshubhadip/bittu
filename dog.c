#include<stdio.h>
#include<string.h>
struct dog  //defining structure
{
	char name[20];
	char breed[40];
	int age;
	char color[20];
};

void display(struct dog *p)  //function display()
{
	printf("* Dog's name: %s\n",p->name);
	printf("* Dog's breed: %s\n",p->breed);
	printf("* Dog's age: %d\n",p->age);
	printf("* Dog's color: %s\n",p->color);
}

void changeInc(struct dog *p)  //function changeInc()
{
	strcpy(p->name,"Jack");   //changing name
	p->age ++;  //increasing age
	
	//printing result
	printf("\n* Dog's new name is: %s\n",p->name);
	printf("* Dog's age is: %d\n",p->age);
}

int main()
{
	struct dog d, *p;
	
	//initialization:
	strcpy(d.name,"Rex");
	strcpy(d.breed,"Golden Retriever");
	d.age = 5;
	strcpy(d.color,"Black");
	
	//pointer to structure:
	p = &d;
	
	//calling function display() with the pointer to structure as a parameter
	display(p);
	
	//calling function changeInc() with the pointer to structure as a parameter
	changeInc(p);
	return 0;
}
