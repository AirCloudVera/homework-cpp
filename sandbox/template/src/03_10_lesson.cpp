#include <iostream>

struct A {
  unsigned char type : 3;
  unsigned char count : 6;
};

int main(int argc, char* argv[]) {
  A a;

  std::cout << " Size: " << sizeof(a) << std::endl;
  a.type = 5;
  std::cout << (unsigned int)*reinterpret_cast<char*>(&a) << std::endl;
  a.type = 0x3f;
  std::cout << (unsigned int)*reinterpret_cast<char*>(&a) << std::endl;
}