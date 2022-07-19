#include "sort.h"
/**
 * swap - swap position of the elements passed
 *
 * @a: pointer the element one
 * @b: pointer the element two
 */

 void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * selection_sort - sorts an array of elements
 *
 * @array: array of elements
 * @size: number of elements in the array
 *
 */

 void selection_sort(int *array, size_t size) {
    size_t i, j, minimum;
    if (size >= 2){
        for (i = 0; i < size - 1; i++) {
            minimum = i;
            for (j = i + 1; j < size; j++) {
                if (array[j] < array[minimum]) {
                    minimum = j;
                }
            }
            if (minimum != i) {
            swap(&array[i], &array[minimum]);
            print_array(array, size);
            }
        }
    }
 }
