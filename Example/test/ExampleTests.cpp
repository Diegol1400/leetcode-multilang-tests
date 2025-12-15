#include <gtest/gtest.h>
#include "../Example.hpp"

int sideEffect = 42;

bool f() {
    sideEffect = 16;
    return true;
}

struct ExampleTests
    :public::testing::Test
{

    int *x;

    int GetX() {
        return *x;
    }

    virtual void SetUp() override {
        x = new int (42); 
    }

   virtual void TearDown() override {
        delete x;
    } 
};



TEST_F(ExampleTests, DemontratedGTestMacros){
    //EXPECT_TRUE(false);
    //ASSERT_TRUE(false);

    EXPECT_EQ(true, true);
    const bool result = f();
    EXPECT_EQ(16, sideEffect) << "SideEffects equal " << sideEffect;
}

TEST_F(ExampleTests, MAC){
    int y = 16;
    int sum = 100;
    int oldSum = sum;
    int expectNewSum = oldSum + GetX() * y;

    EXPECT_EQ(expectNewSum, MAC(GetX(), y, sum));

    EXPECT_EQ(expectNewSum, sum);

}

TEST_F(ExampleTests, Square){
    int ExpectedSquare = GetX() * GetX();

    EXPECT_EQ(ExpectedSquare, Square(GetX()));
}