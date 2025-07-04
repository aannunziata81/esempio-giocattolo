#include <iostream>

void sumTwoElements(const int &element1, const int &element2, int &total)
{
  total = element1 + element2;
}

void subtractionTwoElements(const int &element1, const int &element2, int &total)
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
  return EXIT_SUCCESS;
}