export module math;

import std;

export {
  int add(int a, int b);
}

export namespace Math {
double sqrt(double n);
} // namespace Math

export class Vec2 {
public:
  Vec2(double _x, double _y);

  double dot(const Vec2 &oth) const;

private:
  double x, y;
};