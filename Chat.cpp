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

const unique_ptr<ChatMessage> &Chat::getChatMessages() const {

    return chat_messages;

}

void Chat::displayChat() {

    cout << "Chat between " << user_1->getName() << " and " << user_2->getName() << endl;

    unique_ptr<ChatMessage> *current_message = &chat_messages;

    while (current_message != nullptr) {

        cout << "Object: " << (*current_message)->getObject() << endl;
        cout << "Text: " << (*current_message)->getText() << endl;
        cout << "Sender: " << (*current_message)->getSender()->getName() << endl;
        cout << "Receiver: " << (*current_message)->getReceiver()->getName() << endl;

        current_message = &(*current_message)->getNext();

    }

}
