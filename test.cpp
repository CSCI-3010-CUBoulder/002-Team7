#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "UtilityFunctions.cpp"
#include <vector>

// Your tests go here
// Each TEST_CASE should test one function
TEST_CASE("Product") {
    std::vector<int> g1;
    for (int i = 1; i < 3; i++)
    {
        g1.push_back(i);
    }
    REQUIRE( Product(g1) == 2 );
}

TEST_CASE("Sum") {
    std::vector<int> vec;
    for (int i = 0; i < 10; ++i)
    {
      vec.push_back(i);
    }
    REQUIRE( Sum(vec) == 45 );
}