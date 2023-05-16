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

void SystemUser::newMessage(const string &obj,const string &txt,const SystemUser &receiver) {
}

