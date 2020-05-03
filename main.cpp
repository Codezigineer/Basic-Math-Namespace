#include <iostream>

// The math Namespace.
namespace math 
{

  // Add.
  int add(int a, int b)
  {
    return a + b;
  }

  // Subtract or minus.
  int subtract(int a, int b)
  {
    return a - b;
  }

  // Times.
  int times(int a, int b)
  {
    return a * b;
  }

  // Division.
  int divide(int a, int b)
  {
    return a / b;
  }

  // Modulus or remainder.
  int modulus(int a, int b)
  {
    return a % b;
  }
}

int main() {
  std::cout << "1 + 1 = " << math::add(1, 1) << std::endl;

  // Does math to return!!
  return math::subtract(0, 0);
}