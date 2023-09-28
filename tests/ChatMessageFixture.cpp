//
// Created by tomma on 15/09/2023.
//


#include <gtest/gtest.h>
#include "../ChatMessage.h"

class ChatMessageFixture : public ::testing::Test {
protected:
    void SetUp() override {
        // Add any setup code here that you want to run before each test.
    }

    void TearDown() override {
        // Add any teardown code here that you want to run after each test.
    }

    // Declare any additional member variables you may need for your tests.
};

TEST_F(ChatMessageFixture, TestChatMessageGetObject) {
    // Test your ChatMessage class's getObject() method here.
    SystemUser sender("Alice");
    SystemUser receiver("Bob");
    ChatMessage message("Hello", make_shared<SystemUser>(sender), make_shared<SystemUser>(receiver));
    EXPECT_EQ(message.getObject(), "Hello");
}

TEST_F(ChatMessageFixture, TestChatMessageAddMessage) {
    // Test your ChatMessage class's addMessage() method here.
    SystemUser sender("Alice");
    SystemUser receiver("Bob");
    ChatMessage message("Hello", make_shared<SystemUser>(sender), make_shared<SystemUser>(receiver));
    // You can simulate input using a stringstream.
    std::istringstream input("This is a test message");
    std::cin.rdbuf(input.rdbuf()); // Redirect cin to read from the stringstream.
    EXPECT_EQ(message.addMessage(), "This is a test message");
}

// Add more test cases as needed for your ChatMessage class.



