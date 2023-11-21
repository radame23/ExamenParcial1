#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	clock_t start, end;
	double cpu_time_used;
	
	
	printf("multiplicacion\n");
			    int n, i, j, k;
    			printf("Ingresa la longitud de la matriz: \n");
    			scanf("%d", &n);
    			int A[n][n], B[n][n], C[n][n];

    			printf("Matriz A:\n");
    			for (i = 0; i < n; i++) 
				{
        			for (j = 0; j < n; j++) 
					{
            			A[i][j] = rand() % (9+1-1)+1; 
            			printf("%d ", A[i][j]);
        			}
        				printf("\n");
    			}
    			printf("Matriz B:\n");
   				for (i = 0; i < n; i++) 
				{
        			for (j = 0; j < n; j++) 
					{
            			B[i][j] = rand() % (9+1-1)+1; 
            			printf("%d ", B[i][j]);
        			}
       					 printf("\n");
    			}
				start= clock();
    			printf("Matriz C:\n");
    			int temporal;
    			for (i = 0; i < n; i++) 
				{
       				 for (j = 0; j < n; j++) 
						{
            			temporal = 0;
            				for (k = 0; k < n; k++) 
							{
                				temporal += A[i][k] * B[k][j];
            				}
            					C[i][j] = temporal;
            					printf("%d ", C[i][j]);
        				}
        					printf("\n");
    			}
    			
    		end= clock();
    		cpu_time_used = ((double)(end=start))/ CLOCKS_PER_SEC;
			printf("Tiempo de ejecucion: %f milisegundos", cpu_time_used);
		   return 0;	
}
