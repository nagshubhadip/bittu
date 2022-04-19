#include<stdio.h>
int main()
{
	int m[3][3];
	int i,j;
	for( i = 0; i < 3; i++ )
		for( j = 0; j < 3; j++ )
			m[i][j] = 3;  //initializing each element by 3
	for( i = 0; i < 3; i++ )
	{
		printf("n[row=%d] =",i);
		for( j = 0; j < 2; j++ )  //printing all elements of a row except the last element
			printf(" %d,",m[i][j]);
		printf(" %d;\n",m[i][j]);  //printing last element of a row with the semicolon(;)
	}
	return 0;
}//end of program

