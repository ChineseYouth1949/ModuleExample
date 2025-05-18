export module math:vec;

export namespace Math {
class Vec2 {
public:
  Vec2(double _x, double _y);

  double dot(const Vec2 &oth) const;

private:
  double x, y;
};
} // namespace Math