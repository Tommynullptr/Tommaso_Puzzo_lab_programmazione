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

    vector<shared_ptr<ChatMessage>> messages;

public:

    Chat(const shared_ptr<SystemUser> &user1, const shared_ptr<SystemUser> &user2);

    virtual ~Chat();


    const shared_ptr<SystemUser> &getUser1() const;

    const shared_ptr<SystemUser> &getUser2() const;

    void displayChat();

    void addMessage(const shared_ptr<ChatMessage>& message);

};



#endif //TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_CHAT_H