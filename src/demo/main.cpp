#include <iostream>
#include "Point2D.h"

int main(int argc, char const *argv[])
{
  std::cout << "Hello example" << std::endl;

  Point2D p1 = Point2D();
  std::cout << p1 << std::endl;
  p1 = Point2D(4, 7);
  std::cout << p1 << std::endl;

  return EXIT_SUCCESS;
}