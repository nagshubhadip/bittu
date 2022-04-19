#include<stdio.h>
int main()
{
	char fname[20], temp[1000];
	int i=0,c=0;
	printf("Enter the file name : ");
	scanf("%s",fname);   //input the file name
	FILE *fp;
	fp = fopen(fname,"r");  //opening the file in read mode
	if(fp == NULL)  //if fp is not pointing any file
	{
		printf("Failed to open file %s\n",fname);  //failed to open file
		return 0;
	}
	while(!feof(fp))  //loop will continue until end of file
	{
		fscanf(fp,"%c",&temp[i]);  //copying the file content character by character to a temporary character array
		i++;
	}
	int n = i-1-1;  //storing the number of element copied  //one -1 becaule of the last null character
	// printing the reverse of the file content
	printf("\n\nReverse of file content : \n");
	for(i=n-1; i>=0; i--)
	{
		printf("%c",temp[i]);
	}
	printf("\n\nFirst 100 character of the file content : \n");
	// printing the first 100 character of the file
	for(i=0; i<100; i++)
	{
		printf("%c",temp[i]);
	}
	printf("\n\nlast 100 character of the file content : \n");
	// printing the last 100 character of the file
	for(i=n-100; i<n; i++)
	{
		printf("%c",temp[i]);
		c++;
	}
	printf("\n\n");
	return 0;
}

