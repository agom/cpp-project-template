#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

#include "lib/lib.hpp"

TEST_CASE("test") { CHECK(lib::hello_world() == "Hello World!"); }