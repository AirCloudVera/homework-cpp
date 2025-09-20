int FindMax(int *arr, int size) {
  int max = arr[0];
  for (int i = 1; i < size; ++i) {
    max = max > arr[i] ? arr[i] : max;
  }
}