#ifndef POINT2D_H
#define POINT2D_H

#include <string>

class Point2D {
public:
    Point2D() = default;
    Point2D(int x, int y);
    virtual ~Point2D() = default;

    int getX() const;
    void setX(int x);
    int getY() const;
    void setY(int y);

    virtual std::string toString() const;

    friend std::ostream & operator<<(std::ostream & stream, Point2D const & point2D);

private:
    int x = 0;
    int y = 0;
};

#endif