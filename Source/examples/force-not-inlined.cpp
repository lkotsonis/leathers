// Copyright (c) 2014, Ruslan Baratov
// All rights reserved.

#include <leathers/push>
#include <leathers/assign-base-inaccessible>
#include <leathers/behavior-change>
#include <leathers/c++98-compat-pedantic>
#include <leathers/c++98-compat>
#include <leathers/catch-semantic-changed>
#include <leathers/copy-ctor-could-not-be-generated>
#include <leathers/deprecated-declarations>
#include <leathers/deprecated>
#include <leathers/disabled-macro-expansion>
#include <leathers/documentation-unknown-command>
#include <leathers/documentation>
#include <leathers/extra-semi>
#include <leathers/layout-changed>
#include <leathers/padded>
#include <leathers/shadow>
#include <leathers/sign-conversion>
#include <leathers/static-ctor-not-thread-safe>
#include <leathers/switch-enum>
#include <leathers/undef>
#include <leathers/unused-parameter>
#include <leathers/weak-vtables>
#include <leathers/automatic-inline>
#if !defined(SHOW_WARNINGS)
# include <leathers/force-not-inlined>
#endif

#include <boost/xpressive/xpressive.hpp>

int main() {
  using namespace boost::xpressive;
  sregex pat1 = "foo" >> +space >> "bar";
}

#include <leathers/pop>
