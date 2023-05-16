//
// Created by tomma on 04/05/2023.
//

#ifndef TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_CHAT_H
#define TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_CHAT_H


#include "SystemUser.h"
#include "ChatMessage.h"


class Chat {

private:

    shared_ptr<SystemUser> user_1;
    shared_ptr<SystemUser> user_2;

    unique_ptr<ChatMessage> chat_messages; //head of messages list (first message)

public:

    Chat(const shared_ptr<SystemUser> &user1, const shared_ptr<SystemUser> &user2);

    virtual ~Chat();


    const shared_ptr<SystemUser> &getUser1() const;

    const shared_ptr<SystemUser> &getUser2() const;

    const unique_ptr<ChatMessage> &getChatMessages() const;

    void displayChat();
};



#endif //TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_CHAT_H