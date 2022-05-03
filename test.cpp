
#include <string>
#include <iostream>

#include "parent.hpp"
#include "child.hpp"

using namespace std;

int main() {
    Parent p{};
    Child c{};
    cout << "parent\n------" << endl;
    cout << "getA -> " << p.getA() << " (expected 'AAA')" << endl;
    cout << "getB -> " << p.getB() << " (expected 'BBB')" << endl;
    cout << "getC -> " << p.getC() << " (expected 'CCC')" << endl;
    cout << "getS -> " << p.getS() << " (expected 'SSS')" << endl;
    cout << "getT -> " << p.getT() << " (expected 'TTT')" << endl;
    cout << "getU -> " << p.getU() << " (expected 'UUU')" << endl;
    cout << endl;
    cout << "child\n-----" << endl;
    cout << "getA -> " << c.getA() << " (expected 'aaa')" << endl;
    cout << "getB -> " << c.getB() << " (expected 'bbb')" << endl;
    cout << "getC -> " << c.getC() << " (expected 'ccc')" << endl;
    cout << "getS -> " << c.getS() << " (expected 'sss')" << endl;
    cout << "getT -> " << c.getT() << " (expected 'ttt')" << endl;
    cout << "getU -> " << c.getU() << " (expected 'uuu')" << endl;
    return 0;
}
