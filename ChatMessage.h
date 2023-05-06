//
// Created by tomma on 04/05/2023.
//

#ifndef TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_CHATMESSAGE_H
#define TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_CHATMESSAGE_H


#include "SystemUser.h"


class ChatMessage {

private:

    string object;
    string text;
    shared_ptr<SystemUser> sender;
    shared_ptr<SystemUser> receiver;

public:
};



#endif //TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_CHATMESSAGE_H