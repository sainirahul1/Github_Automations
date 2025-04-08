#include <iostream>
#include <vector>
#include <algorithm>

extern std::vector<int> sortedSquares(const std::vector<int>& nums);

void runTest(const std::vector<int>& input, const std::vector<int>& expected, int testNum) {
    std::vector<int> result = sortedSquares(input);
    if (result == expected) {
        std::cout << "Test " << testNum << ": ✅ Passed\n";
    } else {
        std::cout << "Test " << testNum << ": ❌ Failed\n";
    }
}

int main() {
    std::vector<std::vector<int>> inputs = {
        {-4, -1, 0, 3, 10},
        {-7, -3, 2, 3, 11},
        {1, 2, 3, 4, 5},
        {-5, -4, -2, -1},
        {0},
        {},
        {-2, 0, 1},
        {-10, -10, -5, 0, 5, 10},
        {2, 2, 2, 2},
        {-3, -3, -3, -3}
    };

    std::vector<std::vector<int>> expected = {
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

    for (size_t i = 0; i < inputs.size(); ++i) {
        runTest(inputs[i], expected[i], i + 1);
    }

    return 0;
}
