#include "point.hpp"

bool operator==(const Point& a, const Point& b) noexcept
{
    return a.x() == b.x() && a.y() == b.y();
}

bool operator!=(const Point& a, const Point& b) noexcept
{
    return !(a == b);
}

bool operator<(const Point& a, const Point& b) noexcept
{
    return a.x() < b.x() || (a.x() == b.x() && a.y() < b.y());
}
