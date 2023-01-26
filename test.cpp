#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE( "Adding N", "[addN]" ) {
    std::vector<int> vect{33, 44};
    std::vector<int> newVect = AddN(vect, 5);
    REQUIRE( newVect[0] == 33 );
    REQUIRE( newVect[1] == 44 );
    REQUIRE( newVect[2] == 5 );
}

TEST_CASE( "Sign(Double)", "[signDouble]" ) {
    REQUIRE( Sign(-5.0) == -1.0 );
}

TEST_CASE( "Sign(int)", "[signInt]" ) {
    REQUIRE( Sign(2) == 1 );
}