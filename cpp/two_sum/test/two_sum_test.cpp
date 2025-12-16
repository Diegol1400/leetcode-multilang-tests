#include <gtest/gtest.h>
#include "../two_sum/two_sum.hpp"

class TwoSumTest : public ::testing::Test
{
    protected:
    Solution sol;
    std::vector<int> nums;
    int target;

    void SetUp() override
    {

    }

    void TearDown() override 
    {

    }

};


TEST_F(TwoSumTest, BasicExample) {
    Solution sol;

    nums = {2, 7, 11, 15};
    target = 9;

    std::vector<int> result = sol.twoSum(nums, target);

    EXPECT_EQ(result[0], 0)<< "Actual indices: " << result[0];
    EXPECT_EQ(result[1], 1);
}

TEST_F(TwoSumTest, MediumExample)
{
    Solution sol;

    nums = {8, 12, 34, 54, 2, 6, 0};
    target = 12;

    std::vector<int> result = sol.twoSum(nums, target);

    EXPECT_EQ(result[0], 1)<< "Actual indices: " << result[0];
    EXPECT_EQ(result[1], 6)<< "Actual indices: " << result[1];
}


TEST_F(TwoSumTest, DificultExample)
{
    Solution sol;

    nums = {8, 12, 34, 54, 2, 6, 0};
    target = 36;

    std::vector<int> result = sol.twoSum(nums, target);

    std::cout << "Result indices: "
              << result[0] << ", "
              << result[1] << std::endl;

    EXPECT_EQ(result[0], 2);
    EXPECT_EQ(result[1], 4);
}

TEST_F(TwoSumTest, ScopedExample)
{
    nums = {8, 12, 34, 54, 2, 6, 0};
    target = 12;

    auto result = sol.twoSum(nums, target);

    SCOPED_TRACE("Indices: " + std::to_string(result[0]) +
                 ", " + std::to_string(result[1]));

    EXPECT_EQ(result[0], 1);
    EXPECT_EQ(result[1], 6);             
    EXPECT_EQ(nums[result[0]] + nums[result[1]], target);
}
