#include <stdio.h>

#define ORDEN 3

// Función para llenar la matriz manualmente
void llenarMatriz(int matriz[ORDEN][ORDEN]) {
    printf("Ingrese los elementos de la matriz de 3x3:\n");
	int i,j;
    for (i = 0; i < ORDEN; i++) {
        for (j = 0; j < ORDEN; j++) {
            printf("Elemento en la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Función para imprimir la matriz
void imprimirMatriz(int matriz[ORDEN][ORDEN]) {
    printf("Matriz :\n");
	int i,j;
    for ( i = 0; i < ORDEN; i++) {
        for ( j = 0; j < ORDEN; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Función para verificar si la matriz es mágica
int esMatrizMagica(int matriz[ORDEN][ORDEN]) {
    int sumaFila, sumaColumna, sumaDiagonal1 = 0, sumaDiagonal2 = 0;
	int i,j;
    // Calcular la suma de la primera fila para comparar
    sumaFila = 0;
    for ( j = 0; j < ORDEN; j++) {
        sumaFila += matriz[0][j];
    }

    // Verificar las filas
    for ( i = 1; i < ORDEN; i++) {
        int sumaFilaActual = 0;
        for ( j = 0; j < ORDEN; j++) {
            sumaFilaActual += matriz[i][j];
        }

        if (sumaFilaActual != sumaFila) {
            return 0; // No es mágica
        }
    }

    // Verificar las columnas
    for ( j = 0; j < ORDEN; j++) {
        sumaColumna = 0;
        for ( i = 0; i < ORDEN; i++) {
            sumaColumna += matriz[i][j];
        }

        if (sumaColumna != sumaFila) {
            return 0; // No es mágica
        }
    }

    // Verificar la diagonal principal
    for ( i = 0; i < ORDEN; i++) {
        sumaDiagonal1 += matriz[i][i];
    }

    // Verificar la diagonal secundaria
    for ( i = 0; i < ORDEN; i++) {
        sumaDiagonal2 += matriz[i][ORDEN - 1 - i];
    }

    // Comprobar si ambas diagonales suman igual que las filas y columnas
    return (sumaDiagonal1 == sumaFila) && (sumaDiagonal2 == sumaFila);
}

int main() {
    int matriz[ORDEN][ORDEN];

    llenarMatriz(matriz);

    imprimirMatriz(matriz);

    if (esMatrizMagica(matriz)) {
        printf("La matriz es mágica.\n");
    } else {
        printf("La matriz no es mágica.\n");
    }

    return 0;
}

