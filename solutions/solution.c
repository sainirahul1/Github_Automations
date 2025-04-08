#include <stdio.h>
#include <stdlib.h>


int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize; 

    int* result = (int*)malloc(numsSize * sizeof(int));  // Allocate memory for result array
    if (!result) return NULL;  // Return NULL if allocation fails

    int left = 0, right = numsSize - 1;
    int index = numsSize - 1;

  
    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare > rightSquare) {
            result[index--] = leftSquare;
            left++;
        } else {
            result[index--] = rightSquare;
            right--;
        }
    }/*now lets make it*/ /*jfsjdfkjsdkfkjds*/

    return result;
}


void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    int nums[] = {-4, -1, 0, 3, 10};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int* result = sortedSquares(nums, numsSize, &returnSize);

    printf("Sorted Squares: ");
    printArray(result, returnSize);

    free(result);  // Free the allocated memory
    return 0;
}
