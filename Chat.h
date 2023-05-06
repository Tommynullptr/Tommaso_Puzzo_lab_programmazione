//
// Created by tomma on 04/05/2023.
//

#ifndef TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_CHAT_H
#define TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_CHAT_H


#include "SystemUser.h"
#include "ChatMessage.h"


class Chat {

private:

    //smart pointers to users
    shared_ptr<SystemUser> user_1;
    shared_ptr<SystemUser> user_2;

    //smart pointer to head list of chat messages
    unique_ptr<ChatMessage> chat_messages;

public:
};



#endif //TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_CHAT_H