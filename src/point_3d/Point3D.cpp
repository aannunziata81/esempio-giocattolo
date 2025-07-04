#include "Point3D.h"
#include <sstream>

Point3D::Point3D(int x, int y, int z) : Point2D(x, y), z{z} {
}

int Point3D::getZ() const {
    return z;
}

void Point3D::setZ(int z) {
    this->z = z;
}

std::string Point3D::toString() const {
    std::ostringstream stream;
    stream << "Rectangle@" << this << ": {";
    stream << Point2D::toString() << ", ";
    stream << "z: " << z << "}";
    return stream.str();
}
