module math;

int add(int a, int b) { return a + b; }

double Math::sqrt(double n) { return std::sqrt(n); }

Vec2::Vec2(double _x, double _y) : x(_x), y(_y) {};
double Vec2::dot(const Vec2 &oth) const { return x * oth.x + y * oth.y; }