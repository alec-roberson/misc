
#include <string>
#include "parent.hpp"
#include "child.hpp"

using namespace std;


// if i don't do (1), I get 
// inherited member is not allowed
const string Child::a = "aaa";
const string Child::s_ = "sss";

// if i don't do (2), I get
// "b/t_" is not a nonstatic data member or base class of class "Child"
// if i don't do (3) i get
// "c/u_" is not a nonstatic data member or base class of class "Child"
Child::Child() : b("bbb"), c("ccc"), t_("ttt"), u_("uuu") {}


