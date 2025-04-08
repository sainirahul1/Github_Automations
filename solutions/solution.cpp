#include <vector>
#include <cstdlib>
#include <algorithm>

std::vector<int> sortedSquares(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> result(n);
    int left = 0, right = n - 1, pos = n - 1;

    while (left <= right) {
        int leftSq = nums[left] * nums[left];
        int rightSq = nums[right] * nums[right];
        if (leftSq > rightSq) {
            result[pos--] = leftSq;
            left++;
        } else {
            result[pos--] = rightSq;
            right--;
        }
    }
    return result;
}


