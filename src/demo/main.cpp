#include <iostream>
#include "Point2D.h"
#include "Point3D.h"

int main(int argc, char const *argv[])
{
  std::cout << "Hello example" << std::endl;

  Point2D p1 = Point2D();
  std::cout << p1 << std::endl;
  p1 = Point2D(4, 7);
  std::cout << p1 << std::endl;

  Point3D p2 = Point3D();
  std::cout << p2 << std::endl;
  p2.setX(3);
  p2.setY(7);
  p2.setZ(8);
  std::cout << p2 << std::endl;

  return EXIT_SUCCESS;
}