#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int op,lon,i,j;
	
	srand(time(NULL));
	
	printf("Programa de matrices\n");
	do{
	printf("Que operacion desea realizar\n 1.-SUMA\n 2.-RESTA\n 3.-MULTIPLICACION\n 4.-SUMA DIAGONAL\n 5.-SUMA TRIANGULAR SUPERIOR\n 6.-FINALIZAR\n");
	scanf("%d", &op);
	
		if(op==1)
		{
			printf("suma\n");
		
			printf("ingrese la longitud de la matriz:\n");	
			scanf("%d",&lon);
		   	int A[lon][lon];
   			int B[lon][lon];
    		int resultado[lon][lon];
                for (i = 0; i < lon; i++) 
				{
                	for (j = 0; j < lon; j++) 
					{
                        A[i][j] = rand() % (9+1-1)+1; 
                        B[i][j] = rand() % (9+1-1)+1; 
                    }
                }
                 printf("Matrices:\n");
                 for (i = 0; i < lon; i++) 
				 {
        			for (j = 0; j < lon; j++) 
					{
          				  printf("%d\t ", A[i][j]);
     				}
       			 		printf("+ \t"); 
       				 for (j = 0; j < lon; j++) 
						{
          				  printf("%d\t", B[i][j]);
      					}
       						 printf("\n"); 
    					}
                for (i = 0; i < lon; i++) 
				{
                    for (j = 0; j < lon; j++) 
					{
                        resultado[i][j] = A[i][j] + B[i][j];
                    }
                }
                printf("Resultado de la suma de matrices:\n");
                for (i = 0; i < lon; i++)
				{
                    for (j = 0; j < lon; j++) 
					{
                        printf("%d\t", resultado[i][j]);
                    }
                    printf("\n");
				}            
                
		} else if(op==2)
		{
					printf("resta\n");
					printf("ingrese la longitud de la matriz:\n");	
					scanf("%d",&lon);
						int A[lon][lon];
    					int B[lon][lon];
    					int resultado[lon][lon];
                for (i = 0; i < lon; i++) 
				{
                	for (j = 0; j < lon; j++) 
					{
                        A[i][j] = rand() % (9+1-1)+1; 
                        B[i][j] = rand() % (9+1-1)+1; 
                    }
                }
                 printf("Matrices:\n");
                 for (i = 0; i < lon; i++) 
				 {
        			for (j = 0; j < lon; j++) 
					{
          				  printf("%d\t ", A[i][j]);
     				}
       			 		printf("- \t"); 
       				 for (j = 0; j < lon; j++) 
						{
          				  printf("%d\t", B[i][j]);
      					}
       						 printf("\n"); 
    					}
                for (i = 0; i < lon; i++) 
				{
                    for (j = 0; j < lon; j++) 
					{
                        resultado[i][j] = A[i][j] - B[i][j];
                    }
                }
                printf("Resultado de la suma de matrices:\n");
                for (i = 0; i < lon; i++) 
				{
                    for (j = 0; j < lon; j++) 
					{
                        printf("%d\t", resultado[i][j]);
                    }
                    printf("\n");
				}            
                
		}else if(op==3)
		{
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
		}else if (op==4)
		{
			int n,suma=0;
			printf("ingrese la longitud de la matriz:\n");
			scanf("%d",&n);
			int A[n][n];
			printf("matriz A:\n");
				for(i=0; i<n; i++)
				{
					for(j=0; j<n; j++)
					{
						A[i][j]=rand() % (9+1-1)+1;
						printf("%d ", A[i][j]);
							
							if(i==j)
							{
								suma+= A[i][j];
							}
								
					}
					printf("\n");
				}
					printf("la suma de la diagonal principal es:   %d \n",suma);
		}else if(op==5)
		{
		int n, i, j;
    		srand(time(NULL));
   		 	printf("Ingrese la longitud de la matriz: ");
    		scanf("%d", &n);
    		int A[n][n];

   			printf("Matriz A:\n");
    		for (i = 0; i < n; i++) 
			{
        		for (j = 0; j < n; j++) 
				{
            		A[i][j] = rand() % (9 + 1 - 1) + 1;
            		printf("%d ", A[i][j]);
        		}
        		printf("\n");
    		}

    		int suma = 0;
    		for (i = 0; i < n; i++) 
			{
        		for (j = i + 1; j < n; j++) 
				{ 
            		suma += A[i][j];
        		}
    		}

    		printf("Suma del triangulo superior: %d\n", suma);	
		}else if (op==6){
			 printf("El programa termino.\n");
		}
	}while(op!=6);
	printf("Programa terminado");
	
	return 0;
}
