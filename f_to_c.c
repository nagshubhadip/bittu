#include<stdio.h>
int fReadTxtFile(float arr[], char fname[])
{
	FILE *fp;
	int i=0;
	fp = fopen(fname, "r"); //opening file in read mode
	while(!(feof(fp)))
	{
		fscanf(fp,"%f",&arr[i]);  //scanning the fahrenheit value and storing it in array
		i++;
	}
	fclose(fp); //closing file
	return i-1;  //returning the size of the array
}
void fCalculate(float f[], int n, float c[])
{
	int i=0;
	 while(i < n)
	 {
		c[i] = (5.0/9.0)*(f[i] - 32);  //calculation and store
	 	i++;
	 }
}

void fWriteTxtFile(float f[], float c[], char fname[], int n)
{
	FILE *fp;
	int i=0;
	fp = fopen(fname, "w"); //opening file in write mode
	fprintf(fp, "Fahrenheit(F)      Celsius(C)\n");
	fprintf(fp, "=============      ==========\n");
	while(i < n)
	{
		fprintf(fp,"     %4.2f %15.2f\n",f[i],c[i]);  //printing result in file
		i++;
	}
	fclose(fp); //closing file
}

int main()
{
	char fname[100];
	float f[1000], c[1000];
	int n;
	printf("Enter input File name: ");
	scanf("%s",fname);  //scanning input file name
	n = fReadTxtFile(f, fname); //calling function for reading from input file
	fCalculate(f, n, c);  //calculate
	printf("Enter output File name: ");
	scanf("%s",fname);  //scanning output file name
	fWriteTxtFile(f, c, fname, n);  //calling function for writing in output file/
	printf("....WORK DONE....\n"); 
	return 0;
}
