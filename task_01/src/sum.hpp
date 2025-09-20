int GetMedian(int first_number, int second_number, int third_number) {
  if ((first_number >= second_number && second_number >= third_number) or
      (second_number >= first_number && third_number >= second_number)) {
    return second_number;
  }
  if ((second_number >= third_number && third_number >= first_number) or
      (third_number >= second_number && first_number >= third_number)) {
    return third_number;
  }
  if ((third_number >= first_number && first_number >= second_number) or
      (first_number >= third_number && second_number >= first_number)) {
    return first_number;
  }
  return 0;
}