//
// Created by tomma on 16/05/2023.
//

#ifndef TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_OBSERVER_H
#define TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_OBSERVER_H



class Observer {

public:

    virtual ~Observer();


    virtual void update() = 0;

    virtual void attach() = 0;

    virtual void detach() = 0;

};
#endif //TOMMASO_PUZZO_LAB_PROGRAMMAZIONE_OBSERVER_H