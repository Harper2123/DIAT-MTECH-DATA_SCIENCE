#include <stdio.h>
#include <time.h>

void bubble_sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[15] = {10, 23, 9, 71, -3, 89, 46, 34, 59, 17, 11, 8, 72, 61, 57};
    int n = 15;

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    bubble_sort(arr, n);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nThe execution time of Bubble Sort is %lf seconds", cpu_time_used);

    return 0;
}
