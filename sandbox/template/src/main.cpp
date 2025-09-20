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
