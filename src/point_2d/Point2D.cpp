#include "Point2D.h"
#include <sstream>

Point2D::Point2D(int x, int y) : Point2D(), x{x}, y{y} {
}

int Point2D::getX() const {
    return x;
}

void Point2D::setX(int x) {
    this->x = x;
}

int Point2D::getY() const {
    return y;
}

void Point2D::setY(int y) {
    this->y = y;
}

std::string Point2D::toString() const {
    std::ostringstream stream;
    stream << "Point2D@" << this << ": {";
    stream << "x: " << x << ", ";
    stream << "y: " << y << "}";
    return stream.str();
}

std::ostream & operator<<(std::ostream & stream, Point2D const & point2D) {
    stream << point2D.toString();
    return stream;
}