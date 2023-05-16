//
// Created by tomma on 04/05/2023.
//

#ifndef TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_SYSTEMUSER_H
#define TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_SYSTEMUSER_H


#include <iostream>
#include <string>
#include <memory>
#include <sstream>

using namespace std;


class SystemUser {

private:

    string name;
    const string id;
    static bool id_check[100];

public:

    SystemUser(const string &name);

    virtual ~SystemUser();


    const string &getName() const;

    void setName(string &name);

    const string &getId() const;

    static bool checkForId(const int &i);

    static bool checkIdFull();

    string generateId();

    void newMessage(const string &obj,const string &txt,const SystemUser &receiver); //TODO ripensare meglio al design
};



#endif //TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_SYSTEMUSER_H