#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"
#include "func.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("get_gc")
{
	REQUIRE(AGCTATAG == .375);
}

TEST_CASE("get_gc")
{
	int dna = AGCTATAG
	int result = val_ref_params
	REQUIRE(AGCTATAG == .375);
	REQUIRE(CGCTATAG == .50)
}

TEST_CASE("get_reverse_string")
{
	REQUIRE(AGCTATAG == GATATCGA);
	REQUIRE(CGCTATAG == GATATCGC);
}
TEST_CASE("get_dna_complement")

{
	int dna = AGCTATAG
	int result = val_ref_params
	REQUIRE(AAAACCCGGT == ACCGGGTTTT);
	REQUIRE(CCCGGAAAAT == ATTTTCCGGG);
}