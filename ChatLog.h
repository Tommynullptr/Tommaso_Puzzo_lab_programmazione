//
// Created by tomma on 04/05/2023.
//

#ifndef TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_CHATLOG_H
#define TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_CHATLOG_H


#include "Chat.h"


class ChatLog {

private:
    //smart pointer to list head of chats
    unique_ptr<Chat> chats;

public:

        ChatLog();

        virtual ~ChatLog();


};



#endif //TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_CHATLOG_H