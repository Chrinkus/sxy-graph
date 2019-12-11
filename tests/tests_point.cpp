#include <catch2/catch.hpp>

#include "point.hpp"

TEST_CASE("Point constructs as expected", "[ctor]") {
	Point p1;
	Point p2 {};
	Point p3 { 0, 0 };

	REQUIRE(p1.x() == 0);
	REQUIRE(p1.y() == 0);
	REQUIRE(p2.x() == p1.x());
	REQUIRE(p2.y() == p1.y());
	REQUIRE(p3.x() == p2.x());
	REQUIRE(p3.y() == p2.y());
}

TEST_CASE("Point equality comparisons work", "[eq]") {
	Point p1;
	Point p2 { 0, 0 };
	Point p3 { 0, 5 };
	Point p4 { 2, 0 };

	REQUIRE(p1 == p2);
	REQUIRE(p3 != p2);
	REQUIRE(p4 != p2);
}
