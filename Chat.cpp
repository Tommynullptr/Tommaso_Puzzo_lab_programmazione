//
// Created by tomma on 04/05/2023.
//

#include "Chat.h"

Chat::Chat(const shared_ptr<SystemUser> &user1, const shared_ptr<SystemUser> &user2) : user_1(user1), user_2(user2) {}

Chat::~Chat() {}


const shared_ptr<SystemUser> &Chat::getUser1() const {

    return user_1;

}

const shared_ptr<SystemUser> &Chat::getUser2() const {

    return user_2;

}

void Chat::displayChat() {
    cout << "Chat between " << user_1->getName() << " and " << user_2->getName() << endl;

    for (const auto& message : messages) {
        cout << "Object: " << message->getObject() << endl;
        cout << "Text: " << message->getText() << endl;
        cout << "Sender: " << message->getSender()->getName() << endl;
        cout << "Receiver: " << message->getReceiver()->getName() << endl;
    }
}


void Chat::addMessage(const shared_ptr<ChatMessage>& message) {

    messages.push_back(message);

}

