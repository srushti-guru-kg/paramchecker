#include "paramchecker.h"
#include <gtest/gtest.h>
 
TEST(BpmOK, BPM) { 
    ASSERT_EQ(true, BpmOK(80,100));
}

TEST(BpmOK, BPM) { 
    ASSERT_EQ(false, BpmOK(50,170));
}

TEST(Spo2OK, SPO2) { 
    ASSERT_EQ(true, Spo2OK(100));
}

TEST(Spo2OK, SPO2) { 
    ASSERT_EQ(false, Spo2OK(50));
}

TEST(ResprateOK, respRate) { 
    ASSERT_EQ(true, ResprateOK(20,100));
}

TEST(ResprateOK, respRate) { 
    ASSERT_EQ(false, ResprateOK(40,50));
}

TEST(VitalsTest, SPO2) {
    ASSERT_EQ(true, vitalsAreOk(80, 100, 50));
}

TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, vitalsAreOk(100, 40, 50));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
