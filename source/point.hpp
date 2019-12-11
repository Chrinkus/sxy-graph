#pragma once

class Point {
public:
	Point() = default;
	Point(int x, int y) : _x{x}, _y{y} { }

	int x() const noexcept { return _x; }
	int y() const noexcept { return _y; }

	void move(int dx, int dy) noexcept { _x += dx; _y += dy; }
private:
	int _x = 0;
	int _y = 0;
};

bool operator==(const Point& a, const Point& b) noexcept;
bool operator!=(const Point& a, const Point& b) noexcept;
bool operator<(const Point& a, const Point& b) noexcept;

