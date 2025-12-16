#include <gtest/gtest.h>
extern "C" {
#include "../two_sum/two_sum.h"
}

TEST(TwoSumCTest, BasicExample)
{
    int nums[] = {2, 7, 11, 15};
    int returnSize = 0;

    int* result = twoSum(nums, 4, 9, &returnSize);

    ASSERT_NE(result, nullptr);     // Validar que sí devolvió algo
    EXPECT_EQ(returnSize, 2);       // Tamaño correcto
    EXPECT_EQ(result[0], 0);        // índice 2
    EXPECT_EQ(result[1], 1);        // índice 7

    free(result);                   
}
