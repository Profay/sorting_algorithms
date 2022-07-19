#include "sort.h"


/**
 * bubble_sort - Function to sort a list of objects
 * @array: list of objects
 * @size: size of the list
 */

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

 void bubble_sort(int *array, size_t size)
 {
    size_t i, j;
    for (i = 0; i < size; i++) {
        for(j = 0; j < size - i; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                print_array(array, size);
            }
            }
 }
 }