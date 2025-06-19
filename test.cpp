#include "singleton.h"
#include <gtest/gtest.h>

TEST(SingletonTest, FirstSingleTest) {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();
    ASSERT_EQ(s1, s2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
