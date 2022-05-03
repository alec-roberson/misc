
#include <string>
#include "parent.hpp"

using namespace std;

const string Parent::a = "AAA";
const string Parent::s_ = "SSS";

Parent::Parent() : b("BBB"), c("CCC"), t_("TTT"), u_("UUU") {}

string Parent::getA() {
    return a;
}

string Parent::getB() {
    return b;
}

string Parent::getC() {
    return c;
}

string Parent::getS() {
    return s_;
}

string Parent::getT() {
    return t_;
}

string Parent::getU() {
    return u_;
}
