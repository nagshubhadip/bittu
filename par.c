#include<stdio.h>
//====================Question 1 ===================================
void count(char arr[]) // function for count the number of ( and )
{
	int c1=0,c2=0,i;
	for(i=0;arr[i]!= '\0'; i++)
	{	
		if(arr[i] == '(')
			c1++;
		else if(arr[i] == ')')
			c2++;
	}
	printf("The number of '(' = %d and The number of ')' = %d\n",c1,c2);
}
//====================Question 2 ===================================
void push(char stack[],int *t)  //function for push into the stack
{
	(*t)++;
	stack[*t] = '(';
}
void pop(char stack[],int *t)  //function from pop from the stack
{
	stack[*t] = '$';
	(*t)--;
}
int isempty(int t) //function for checking the stack is empty or not
{
	if (t == -1)
		return 1;
	return 0;
}
int main()
{
	char arr[50],stack[50];
	int top = -1,i,f=0;
	printf("Enter the string : ");
	scanf("%s",arr);  //reading the string
	count(arr);  //counting ( and )    //===============Question 1======== ends here
	//===============Question 2======== starts here
	for(i=0;arr[i]!= '\0'; i++)
	{	
		if(arr[i] == '(')
			push(stack,&top);  //if ( comes then push
		else if(arr[i] == ')')
		{
			if(!isempty(top))   //if ) comes, then checking if the stack is mpty or not
				pop(stack,&top);  //if the stack is not empty, then pop
			else 
			{
				f=1;  //if the stack is empty and we have still seen ')' then the expression is wrong, so make the flag 1
				break;
			}
		}
	}
	if(f==0 && isempty(top)) //if flag is 0 and stack is empty then correct expression
		printf("Correct Expression");
	else //else wrong expression 
		printf("Wrong Expression ");
	return 0;
}//end of main
