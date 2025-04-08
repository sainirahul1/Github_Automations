#include <stdio.h>
#include <stdlib.h>

extern int* sortedSquares(int* nums, int numsSize, int* returnSize);

void runTests() {
    int inputs[10][10] = {
        {-4, -1, 0, 3, 10},
        {-7, -3, 2, 3, 11},
        {1, 2, 3, 4, 5},
        {-5, -4, -2, -1},
        {0},
        {}, // Empty input
        {-2, 0, 1},
        {-10, -10, -5, 0, 5, 10},
        {2, 2, 2, 2},
        {-3, -3, -3, -3}
    };
    int sizes[10] = {5, 5, 5, 4, 1, 0, 3, 6, 4, 4};

    int expected[10][10] = {
        {0, 1, 9, 16, 100},
        {4, 9, 9, 49, 121},
        {1, 4, 9, 16, 25},
        {1, 4, 16, 25},
        {0},
        {},
        {0, 1, 4},
        {0, 25, 25, 100, 100, 100},
        {4, 4, 4, 4},
        {9, 9, 9, 9}
    };

    for (int i = 0; i < 10; i++) {
        int returnSize = 0;
        int* result = sortedSquares(inputs[i], sizes[i], &returnSize);

        int pass = 1;
        for (int j = 0; j < sizes[i]; j++) {
            if (!result || result[j] != expected[i][j]) {
                pass = 0;
                break;
            }
        }

        printf("Test %d: %s\n", i + 1, pass ? "✅ Passed" : "❌ Failed");
        if (result) free(result);
    }
}

int main() {
    runTests();
    return 0;
}
