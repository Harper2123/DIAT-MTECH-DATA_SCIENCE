#include <stdio.h>
#include <time.h>

void insertion_sort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        // Move elements greater than key to one position ahead of their current position
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

int main() {
    int arr[15] = {10, 23, 9, 71, -3, 89, 46, 34, 59, 17, 11, 8, 72, 61, 57};
    int n = 15;

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    insertion_sort(arr, n);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nThe execution time of Insertion Sort is %lf seconds", cpu_time_used);

    return 0;
}
