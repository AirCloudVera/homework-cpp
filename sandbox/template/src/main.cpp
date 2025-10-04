#include <iostream>

#include "utils.hpp"

void Print(Point a) { std::cout << "(" << a.x << "," << a.y << ")"; }

struct Point {
  int x = 0;
  int y = 0;
  void Print();
} a;

// Point operator+(Point l, Point r) { return Point{l.x + r.x, l.y + r.y}; }

// Point operator*(Point p, int n) { return Point{p.x * n, p.y * n}; }

// Point &operator+=(Point &a, Point b) {
//   a = a + b;
//   return a;
// }

int main() {
  Point a;
  a.Print();
  return 0;
  // Point a{0, 3}, b{2, 1};
  // Point c = a + b;
  // a.operator+=(b);
  // std::cout << c.x << " " << c.y << " ";
}

void Point::Print() { std::cout << "(" << x << "," << y << ")"; }