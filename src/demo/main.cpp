#include <iostream>

void sumTwoElement(const int &element1, const int &element2, int &total)
{
  total = element1 + element2;
}

int main(int argc, char const *argv[])
{
  std::cout << "Hello example" << std::endl;
  constexpr int element1{2};
  constexpr int element2{54};
  int total{};
  sumTwoElement(element1, element2, total);
  std::cout << "Sum: " << total << std::endl;
  return EXIT_SUCCESS;
}