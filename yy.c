#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include<math.h>

long long solve (int N, int* A) {
   // Write your code here
   int i, j, k;
   long long temp = 1, t1, t2, sum = 0;
   for(i=0; i<N; i++)
   {
       for(j=i+1; j<N; j++)
       {
          // temp = 1;
           for(k=0; k < 1000; k++)
           {
               //temp = pow(2,k);
               
               t1 = (A[i] / temp) % 2;
               t2 = (A[j] / temp) % 2;
               
               sum += temp * t1 * t2;
               temp *= 2;

           }
           temp = 1;
       }
   }
   return sum;
}

int main() {
    int T;
    scanf("%d", &T);
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        scanf("%d", &N);
        int i_A;
        int *A = (int *)malloc(sizeof(int)*(N));
        for(i_A = 0; i_A < N; i_A++)
        	scanf("%d", &A[i_A]);

        long long out_ = solve(N, A);
        printf("%lld", out_);
        printf("\n");
    }
}
