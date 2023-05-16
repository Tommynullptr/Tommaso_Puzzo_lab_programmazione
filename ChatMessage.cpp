//
// Created by tomma on 04/05/2023.
//

#include "ChatMessage.h"

ChatMessage::ChatMessage(const string &object, const string &text, const shared_ptr<SystemUser> &sender, const shared_ptr<SystemUser> &receiver) : object(object), text(text), sender(sender), receiver(receiver) {

    ChatMessage::addMessagge()

}

ChatMessage::~ChatMessage() {

}


const string &ChatMessage::getObject() const {

    return object;

}

const string &ChatMessage::getText() const {

    return text;

}

const shared_ptr<SystemUser> &ChatMessage::getSender() const {

    return sender;

}

const shared_ptr<SystemUser> &ChatMessage::getReceiver() const {

    return receiver;

}

const unique_ptr<ChatMessage> &ChatMessage::getNext() const {

    return next;

}

void ChatMessage::setNext(const unique_ptr<ChatMessage> &next) {

    ChatMessage::next = next;

}
