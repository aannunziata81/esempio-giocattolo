#ifndef POINT3D_H
#define POINT3D_H

#include "Point2D.h"

class Point3D : public Point2D {
public:
    Point3D() = default;
    Point3D(int x, int y, int z);
    virtual ~Point3D() = default;

    int getZ() const;
    void setZ(int z);

    std::string toString() const override;

private:
    int z = 0;
};

#endif