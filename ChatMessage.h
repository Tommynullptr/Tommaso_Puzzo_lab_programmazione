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

    unique_ptr<ChatMessage> next;

public:

    ChatMessage(const string &object, const string &text, const shared_ptr<SystemUser> &sender, const shared_ptr<SystemUser> &receiver);

    virtual ~ChatMessage();


    const string &getObject() const;

    const string &getText() const;

    const shared_ptr<SystemUser> &getSender() const;

    const shared_ptr<SystemUser> &getReceiver() const;

    const unique_ptr<ChatMessage> &getNext() const;

    void setNext(const unique_ptr<ChatMessage> &next);
};



#endif //TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_CHATMESSAGE_H