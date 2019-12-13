#include <catch2/catch.hpp>
#include <vector>
#include <algorithm>

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

TEST_CASE("Point move changes point", "[move]") {
    Point p1;

    CHECK(p1.x() == 0);
    CHECK(p1.y() == 0);

    p1.move(3, -5);

    REQUIRE(p1.x() == 3);
    REQUIRE(p1.y() == -5);

    p1.move(2, 2);

    REQUIRE(p1.x() == 5);
    REQUIRE(p1.y() == -3);
}

TEST_CASE("Points can be sorted", "[lt]") {
    Point p1;
    Point p2 { 2, -7 };
    Point p3 { -3, 4 };

    std::vector<Point> vp;
    vp.emplace_back(Point{});
    vp.emplace_back(Point{ 2, -7 });
    vp.emplace_back(Point{ -3, 4 });

    REQUIRE(vp.back().x() == -3);
    REQUIRE(vp.back().y() == 4);

    std::sort(std::begin(vp), std::end(vp));
    REQUIRE(vp.back().x() == 2);
    REQUIRE(vp.back().y() == -7);
    REQUIRE(vp.front().x() == -3);
    REQUIRE(vp.front().y() == 4);
}
