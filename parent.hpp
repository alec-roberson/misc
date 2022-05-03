#ifndef PARENT_H
#define PARENT_H

#include <string>

using namespace std;

class Parent {
    public:
        static const string a;
        const string b;
        string c;

        Parent();

        virtual string getA();
        virtual string getB();
        virtual string getC();
        virtual string getS();
        virtual string getT();
        virtual string getU();
    
    protected:
        static const string s_;
        const string t_;
        string u_;
};

#endif