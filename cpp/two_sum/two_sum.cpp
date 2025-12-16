#include "two_sum.hpp"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
    std::vector<int> result(2);

    for (std::size_t i = 0; i < nums.size() - 1; i++) {
        for (std::size_t j = i + 1; j < nums.size(); j++) {
            if (target == nums.at(i) + nums.at(j)) {
                result.at(0) = i;
                result.at(1) = j;
                return result;
            }
        }
    }

    return {};
}
