//
// Created by tomma on 16/05/2023.
//

#ifndef TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_SUBJECT_H
#define TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_SUBJECT_H



#include "Observer.h"
#include <memory>


class Subject {

public:

    virtual ~Subject();

    virtual void registerObserver(std::unique_ptr<Observer> &o) = 0;

    virtual void removeObserver(std::unique_ptr<Observer> &o) = 0;

    virtual void notify() = 0;
};



#endif //TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_SUBJECT_H
