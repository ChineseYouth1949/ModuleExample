import std;
import math;

int main() {
  std::cout << Math::add(1, 2) << std::endl;
  std::cout << Math::sqrt(9) << std::endl;
  std::cout << Math::Vec2(1, 2).dot(Math::Vec2(-2, 1)) << std::endl;
  return 0;
}