#include <iostream>
#include <vector>
#include <iomanip>

extern std::vector<int> sortedSquares(const std::vector<int>& nums);

void runTests() {
    std::vector<std::vector<int>> inputs = {
        {-4, -1, 0, 3, 10},
        {-7, -3, 2, 3, 11},
        {1, 2, 3, 4, 5},
        {-5, -4, -2, -1},
        {0}, {}, {-2, 0, 1},
        {-10, -10, -5, 0, 5, 10},
        {2, 2, 2, 2}, {-3, -3, -3, -3}
    };
    std::vector<std::vector<int>> expected = {
        {0, 1, 9, 16, 100},
        {4, 9, 9, 49, 121},
        {1, 4, 9, 16, 25},
        {1, 4, 16, 25},
        {0}, {}, {0, 1, 4},
        {0, 25, 25, 100, 100, 100},
        {4, 4, 4, 4}, {9, 9, 9, 9}
    };

    for (size_t i = 0; i < inputs.size(); ++i) {
        std::vector<int> result = sortedSquares(inputs[i]);
        bool pass = (result == expected[i]);

        std::cout << "Test " << (i + 1) << ": " << (pass ? "✅ Passed" : "❌ Failed") << "\n";
    }
}

int main() {
    runTests();
    return 0;
}
