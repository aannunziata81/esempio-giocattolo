#include <iostream>
#include <Point2D.h>
#include <Point3D.h>

void sumTwoElements(int element1, int element2, int &total)
{
  total = element1 + element2;
}

void subtractionTwoElements(int element1, int element2, int &total)
{
  total = element1 - element2;
}


int main(int argc, char const *argv[])
{
  std::cout << "Hello example" << std::endl;
  constexpr int element1{2};
  constexpr int element2{54};
  int total{};
  sumTwoElements(element1, element2, total);
  std::cout << "Sum: " << total << std::endl;
  subtractionTwoElements(element2, element1, total);
  std::cout << "Subtraction: " << total << std::endl;

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