#ifndef CHILD_H
#define CHILD_H

#include <string>
#include "parent.hpp"

using namespace std;

class Child : public Parent {
    public:
        // why do i need to re-declare these static const variables? (1)
        static const string a;
        // why do i need to redeclare these non-static const variables? (2)
        const string b;
        // why do i need to redeclare these non-static non-const data members? (3)
        string c;

        Child();

    protected:
        // (1)
        static const string s_;
        // (2)
        const string t_;
        // (3)
        string u_;
};

#endif