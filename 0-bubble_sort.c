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
    size_t i, j, flag;
    for (i = 0; i < size - 1; ++i) {
        flag = 0;
        for(j = 0; j < size - i -1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                print_array(array, size);
                flag = 1;
                }
            }
            if (flag == 0) {
                break;
            }
    }
 }
 