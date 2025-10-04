#pragma once

struct Point {
  int x = 0;
  int y = 0;
  void Print();
};

Point operator+(const Point &l, const Point &r) {
  return Point(l.x + r.x, l.y + r.y)
};