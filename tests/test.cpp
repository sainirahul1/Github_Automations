#include <iostream>
#include <vector>
#include <algorithm>
#include "sorted_squares.cpp" // Include your function file

using namespace std;

void runTests() {
    vector<vector<int>> inputs = {
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

    vector<vector<int>> expected = {
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

    for (int i = 0; i < inputs.size(); i++) {
        vector<int> res = sortedSquares(inputs[i]);
        bool pass = res == expected[i];
        cout << "Test " << i + 1 << ": " << (pass ? "✅ Passed" : "❌ Failed") << endl;
    }
}

int main() {
    runTests();
    return 0;
}
