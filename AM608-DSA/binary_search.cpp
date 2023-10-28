#include <stdio.h>
#include <time.h>

int binary_search_recursive(int a[], int low, int high, int x) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == x) {
            return mid;
        }

        if (a[mid] > x) {
            return binary_search_recursive(a, low, mid - 1, x);
        }

        return binary_search_recursive(a, mid + 1, high, x);
    }

    return -1;
}

int main() {
    int arr[15] = {10, 23, 9, 71, -3, 89, 46, 34, 59, 17, 11, 8, 72, 61, 57};
    int key = 61;
    int idx;

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    idx = binary_search_recursive(arr, 0, 14, key);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    if (idx == -1) {
        printf("The element %d is not in the array", key);
    } else {
        printf("The element %d is at the index %d", key, idx);
    }
    printf("\nThe execution time is %lf seconds", cpu_time_used);

    return 0;
}
