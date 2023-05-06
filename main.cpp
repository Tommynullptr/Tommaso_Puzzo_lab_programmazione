

#include "SystemUser.h"



int main() {

    string n = "Biden";
    unique_ptr<SystemUser> a(new SystemUser(n));
    cout << a->getName() << endl;
    cout << a->getId() << endl;

    string m = "Trump";
    unique_ptr<SystemUser> b(new SystemUser(m));
    cout << b->getName() << endl;
    cout << b->getId() << endl;


    return 0;

}
