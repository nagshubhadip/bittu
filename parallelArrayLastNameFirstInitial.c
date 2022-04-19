#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//function prototypes
void loadArrays(int time[],int speed[]);
void calculateDist(int time[], int speed[], int distance[]);
void print(int time[], int speed[], int distance[]);
const int SIZE=5;
//main function
int main()
{
   //seed a time to generate a random numbers
   srand(time(0));

   //create parallel array
   int time[SIZE];
   int speed[SIZE];
   int distance[SIZE];

   //call functions, loadArrays
   loadArrays(time,speed);
   //call functions, calculateDist
   calculateDist(time, speed, distance);
   //call functions, print
   print(time, speed, distance);

   return 0;
}


/*Function loadArrays that generates random values for time and speed arrays*/
void loadArrays(int time[],int speed[])
{
   for(int i=0;i<SIZE;i++)
   {
       //generate random number in range of 1 to 6
       time[i]=rand()%6+1;
       //generate random number in range of 50 to 70
       speed[i]=rand()%(70-50)+50;
   }
}//end of the function


/*Function calculateDist that generates distance array from time and speed values*/
void calculateDist(int time[], int speed[], int distance[])
{
   for(int i=0;i<SIZE;i++)
   {
       distance[i]= time[i]*speed[i];
   }
}//end of the function

/* The function, print that takes time, speed, and distance arrays and prints the time, speed, and distance. */
void print(int time[], int speed[], int distance[])
{
   printf("\n\n");
   printf("           Time(H)              Speed(mph)             Distance(miles)\n");
   printf("          ==========            ==========             ===============\n");
   for(int i=0;i<SIZE;i++)
   {  
       printf("%15d%25d%25d\n",time[i],speed[i],distance[i]);
   }
}//end of the function
