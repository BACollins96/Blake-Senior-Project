#include "whattotest.cpp"
#include <gtest/gtest.h>
 
/*TEST(SquareRootTest, PositiveNos) { 
    ASSERT_EQ(6, squareRoot(36.0));
    ASSERT_EQ(18.0, squareRoot(324.0));
    ASSERT_EQ(25.4, squareRoot(645.16));
    ASSERT_EQ(0, squareRoot(0.0));
    ASSERT_EQ(true, true);
}*/
 
TEST(RoomTest, FailTest) {
    char choices[] = "123";
    int size = 3;
    bool result = SecRoom(choices,size);
    EXPECT_EQ(false, result);
    result = FirstRoom(choices, size);
    EXPECT_EQ(false, result);
    result = FinRoom(choices, size);
    EXPECT_EQ(false, result);
}

TEST(RoomTest, FirstTest) {
    char choices[] = "43113";
    int size = 5;
    bool result = FirstRoom(choices,size);
    EXPECT_EQ(true, result);
}

TEST(RoomTest, SecTest) {
    char choices[] = "23133";
    int size = 5;
    bool result = SecRoom(choices,size);
    EXPECT_EQ(true, result);
}

TEST(RoomTest, FinTest) {
    char choices[] = "314253";
    int size = 6;
    bool result = FinRoom(choices,size);
    EXPECT_EQ(true, result);
}
 
int main(int argc, char **argv) {
    
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}