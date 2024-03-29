//
// Created by tomma on 04/05/2023.
//


#include "SystemUser.h"


bool SystemUser::id_check[100] = {false};


SystemUser::SystemUser(const string &name) : name(name), id(generateId()) {
}


const string &SystemUser::getName() const {

    return name;

}

void SystemUser::setName(string &name) {

    SystemUser::name = name;

}

bool SystemUser::checkForId(const int &i) {

    if (SystemUser::id_check[i]) {
        return true;
    }
    else {
        return false;
    }

}

SystemUser::~SystemUser() {

        int i = stoi(this->id);
        this->id_check[i] = false;

}

bool SystemUser::checkIdFull() {

    for (int i = 1; i < 100; i++) {

        if (!SystemUser::checkForId(i)) {
            return false;
        }

    }

    return true;

}

const string &SystemUser::getId() const {

    return id;

}

string SystemUser::generateId() {

    if (this->checkIdFull()) {
        cout << "Impossibile creare ulteriori utenti!" << endl;
        return "";
    }

    int idInt;

    do {
        idInt = rand() % 100;
    } while (SystemUser::checkForId(idInt));

    id_check[idInt] = true;
    return to_string(idInt);

}

void SystemUser::newMessage(const string &obj,const SystemUser &receiver) {

    // Find or create a chat between the sender and receiver
    shared_ptr<Chat> chat = findOrCreateChat(make_shared<SystemUser>(*this), make_shared<SystemUser>(receiver));

    // Create a new ChatMessage and add it to the chat
    shared_ptr<ChatMessage> message = make_shared<ChatMessage>(obj, make_shared<SystemUser>(*this), make_shared<SystemUser>(receiver));
    chat->addMessage(message);

}

shared_ptr<Chat> SystemUser::findOrCreateChat(const shared_ptr<SystemUser>& user1, const std::shared_ptr<SystemUser>& user2) {

    // Search for an existing chat between user1 and user2
    for (const auto& chat : chats) {
        if ((chat->getUser1() == user1 && chat->getUser2() == user2) ||
            (chat->getUser1() == user2 && chat->getUser2() == user1)) {
            return chat;
        }
    }

    // If no existing chat is found, create a new one and add it to both users
    shared_ptr<Chat> newChat = make_shared<Chat>(user1, user2);
    chats.push_back(newChat);
    user1->chats.push_back(newChat);
    user2->chats.push_back(newChat);

    return newChat;

}

