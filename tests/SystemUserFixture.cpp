//
// Created by tomma on 15/09/2023.
//


#include <gtest/gtest.h>
#include "../ChatMessage.h"

class SystemUserFixture : public ::testing::Test {
protected:
    void SetUp() override {
        // Add any setup code here that you want to run before each test.
    }

    void TearDown() override {
        // Add any teardown code here that you want to run after each test.
    }

    // Declare any additional member variables you may need for your tests.

};

TEST_F(SystemUserFixture, TestSystemUserGetName) {
    // Test your SystemUser class's GetName() method here.
    SystemUser user("John");
    EXPECT_EQ(user.getName(), "John");
}

TEST_F(SystemUserFixture, TestSystemUserGenerateId) {
    // Test your SystemUser class's GenerateId() method here.
    SystemUser user("Alice");
    std::string id = user.generateId();
    EXPECT_FALSE(id.empty());
}

// Add more test cases as needed for your SystemUser class.



