#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("num factoral value") {
    REQUIRE( factoral(3) == 6 );
    REQUIRE( factoral(5) == 120 );
    REQUIRE( factoral(6) == 720 );

}