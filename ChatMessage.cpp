//
// Created by tomma on 04/05/2023.
//

#include "ChatMessage.h"

ChatMessage::ChatMessage(const string &object, const shared_ptr<SystemUser> &sender, const shared_ptr<SystemUser> &receiver) : object(object), sender(sender), receiver(receiver) {

    text = "";

}

ChatMessage::~ChatMessage() {

}


const string &ChatMessage::getObject() const {

    return object;

}

const shared_ptr<SystemUser> &ChatMessage::getSender() const {

    return sender;

}

const shared_ptr<SystemUser> &ChatMessage::getReceiver() const {

    return receiver;

}

void ChatMessage::setText() {

    string new_text;
    cin >> new_text;

    this->text = new_text;

}

const string &ChatMessage::getText() const {

    return text;

}

