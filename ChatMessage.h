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

    ChatMessage(const string &object, const shared_ptr<SystemUser> &sender, const shared_ptr<SystemUser> &receiver);

    virtual ~ChatMessage();


    const string &getObject() const;

    const shared_ptr<SystemUser> &getSender() const;

    const shared_ptr<SystemUser> &getReceiver() const;

    void setText();

    const string &getText() const;

};



#endif //TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_CHATMESSAGE_H