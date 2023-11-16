#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 5
#define COLUMNAS 7

void MatrizAleatoria(int matriz[FILAS][COLUMNAS]) {
    int i, j;

    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = rand() % 3; 
        }
    }
}

void imprimirMatriz(int matriz[FILAS][COLUMNAS]) {
    int i, j;

    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int SumaDiagonalPrincipal(int matriz[FILAS][COLUMNAS]) {
    int i, suma = 0;

    for (i = 0; i < FILAS && i < COLUMNAS; i++) {
        suma += matriz[i][i];
    }

    return suma;
}

int SumaPrimeraFila(int matriz[FILAS][COLUMNAS]) {
    int j, suma = 0;

    for (j = 0; j < COLUMNAS; j++) {
        suma += matriz[0][j];
    }

    return suma;
}

int SumaUltimaColumna(int matriz[FILAS][COLUMNAS]) {
    int i, suma = 0;

    for (i = 0; i < FILAS; i++) {
        suma += matriz[i][COLUMNAS - 1];
    }

    return suma;
}

int SumaFilasPares(int matriz[FILAS][COLUMNAS]) {
    int i, j, suma = 0;

    for (i = 0; i < FILAS; i += 2) {
        for (j = 0; j < COLUMNAS; j++) {
            suma += matriz[i][j];
        }
    }

    return suma;
}

int SumaColumnasImpares(int matriz[FILAS][COLUMNAS]) {
    int i, j, suma = 0;

    for (j = 1; j < COLUMNAS; j += 2) {
        for (i = 0; i < FILAS; i++) {
            suma += matriz[i][j];
        }
    }

    return suma;
}

int SumaTriangularSuperiorDiagonalPrincipal(int matriz[FILAS][COLUMNAS]) {
    int i, j, suma = 0;

    for (i = 0; i < FILAS; i++) {
        for (j = i + 1; j < COLUMNAS; j++) {
            suma += matriz[i][j];
        }
    }

    return suma;
}

int SumaTriangularInferiorDiagonalPrincipal(int matriz[FILAS][COLUMNAS]) {
    int i, j, suma = 0;

    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < i; j++) {
            suma += matriz[i][j];
        }
    }

    return suma;
}


int main() {
    srand(time(NULL));

    int matriz[FILAS][COLUMNAS];

    MatrizAleatoria(matriz);

    printf("Matriz:\n");
    imprimirMatriz(matriz);

    printf("\n1. Suma Diagonal Principal: %d\n", SumaDiagonalPrincipal(matriz));
    printf("2. Suma Primera Fila: %d\n", SumaPrimeraFila(matriz));
    printf("3. Suma Ultima Columna: %d\n", SumaUltimaColumna(matriz));
    printf("4. Suma Filas Pares: %d\n", SumaFilasPares(matriz));
    printf("5. Suma Columnas Impares: %d\n", SumaColumnasImpares(matriz));
    printf("6. Suma Triangular Superior y Diagonal Principal: %d\n",
           SumaTriangularSuperiorDiagonalPrincipal(matriz));
    printf("7. Suma Triangular Inferior y Diagonal Principal: %d\n",
           SumaTriangularInferiorDiagonalPrincipal(matriz));
           printf("\nFilas Pares:\n");



    return 0;
}

