#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) return -1; 
    int mid = low + (high - low) / 2;

    if (arr[mid] == target) return mid;       
    
    if (arr[mid] > target) 
        return binarySearch(arr, low, mid - 1, target); 
    else 
        return binarySearch(arr, mid + 1, high, target); 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int n = 5;
    int target = 40;

    int result = binarySearch(arr, 0, n - 1, target);
    
    (result == -1) ? printf("Not found") : printf("Found at index %d", result);

    return 0;
}