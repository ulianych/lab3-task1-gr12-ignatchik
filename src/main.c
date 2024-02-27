//
//Created by Ulyana Ignatchik 27.02.2024
//
#include "sum.h"
#include <time.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Wrong number of arguments\n");
        return 1;
    }

    int size = atoi(argv[1]);
    if (size <= 0) {
        printf("Invalid array size\n");
        return 1;
    }

    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    srand(time(NULL));
    printf("Generated array: ");
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000;
        printf("%d ", arr[i]);
    }
    printf("\n");

    findNumbersWithMaxDigitSum(arr, size);

    free(arr);

    return 0;
}
