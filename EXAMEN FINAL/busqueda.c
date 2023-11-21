#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Implementación de búsqueda secuencial
int sequential(int arr[], int size, int target) {
	int i;
    for ( i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Se encontró el elemento, devuelve la posición
        }
    }
    return -1;  // El elemento no se encontró
}

// Implementación de búsqueda binaria
int binary(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;  // Se encontró el elemento, devuelve la posición
        }
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;  // El elemento no se encontró
}

int main() {

    srand(time(NULL));
    int size = 50000;
	int i;
    int arr[size];
    for ( i = 0; i < size; i++) {
        arr[i] = i;  
    }

    double total_time_sequential = 0.0, total_time_binary = 0.0;
    double min_time_sequential = 1e9, min_time_binary = 1e9;
    double max_time_sequential = 0.0, max_time_binary = 0.0;

    clock_t start, end;
    double cpu_time_used;


    for (i = 0; i < 100; i++) {
        int target = rand() % size;
        start = clock();
        int sequentialResult = sequential(arr, size, target);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;


        total_time_sequential += cpu_time_used;
        if (cpu_time_used < min_time_sequential) min_time_sequential = cpu_time_used;
        if (cpu_time_used > max_time_sequential) max_time_sequential = cpu_time_used;

 
        start = clock();
        int binaryResult = binary(arr, 0, size - 1, target);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;

       
        total_time_binary += cpu_time_used;
        if (cpu_time_used < min_time_binary) min_time_binary = cpu_time_used;
        if (cpu_time_used > max_time_binary) max_time_binary = cpu_time_used;
    }


    printf("\n\n--- Estadisticas Resumidas ---\n");
    printf("Busqueda Secuencial\n - Tiempo Promedio: %f milisegundos \n - Tiempo Minimo: %f milisegundos\n - Tiempo Maximo: %f milisegundos\n\n",
           total_time_sequential / 100, min_time_sequential, max_time_sequential);
    printf("Busqueda Binaria\n - Tiempo Promedio: %f milisegundos \n - Tiempo Minimo: %f milisegundos\n - Tiempo Maximo: %f milisegundos\n\n",
           total_time_binary / 100, min_time_binary, max_time_binary);

    return 0;
}

