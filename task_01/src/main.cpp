#include <iostream>
#include <vector>
/*
int main() {
  std::cout << "Hello, world!\n";
  int a[] = {3, 4, 5, 6};
  std::cout << a[1] << "\n";
  std::cout << a + 1 << "\n";
  std::cout << *(a + 1) << "\n";
  char *p = (char *)(&a);
  p + 1;
  std::cout << ((a + 1) - (p + 1)) << "\n";
  return 0;
}

bool isPrime(unsigned int number) {
  for (unsigned int i = 2; (i - 1) * (i + 1) < number + 1; i++) {
    if (number % i == 0) {
      return false;
    }
  }
  return true;
}
int main(int argc, char* argv[]) {
  int b = 1929384823;
  std::cout << isPrime(b) << "\n";
}


auto EratosthenSieve(int max) {
  std::vector<bool> array;
  array[5] = true;
}

#include <iostream>

void Mult2(int *arr, int size) {
  for (int i = 0; i < size; ++i) {
    arr[i] *= 2;
  }
}
int main() {
  int n;
  std::cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }
  Mult2(arr, n);
  for (int i = 0; i < n; ++i) {
    std::cout << arr[i] << "\n";
  }
  delete[] arr;
  return 0;
}
*/

#include <iostream>
/*int a[4];
int *pa = &a;
int b = *(pa + 1);  // значение
*/

int* Fibb(int size) {
  int* arr = new int[size];
  arr[0] = 1;
  arr[1] = 1;
  for (int i = 2; i < size + 2; ++i) {
    arr[i] = *(arr + (i - 2)) + *(arr + i - 1);
  }
  return arr;
}

int main() {
  int n;
  std::cin >> n;
  int* data = Fibb(n);
  for (int i = 0; i < n; ++i) {
    std::cout << data[i] << ' ';
  }
}
