//operaciones aleatorias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  

    int a,b,c;

    while (1) {  

        a = rand() % (5+1-1)+1;  
        b = rand() % (9+1-1)+1; 
        c = rand() % (9+1-1)+1; 

        switch (a) 
		{
            case 1:	
                printf("%d + %d = %d\n", b, c, b + c);
                break;
                
            case 2:
                printf("%d - %d = %d\n", b, c, b - c);
                break;
                
            case 3:
                printf("%d * %d = %d\n", b, c, b * c);
                break;
                
            case 4:
                printf("%.2f / %.2f = %.2f\n", (float)b, (float)c, (float)b / c);
                  
        }

        if (a == 5) {
            printf("Programa terminado.\n\n");
            break;  
        }
    }

    return 0;
}
