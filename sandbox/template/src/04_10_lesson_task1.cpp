#include <iostream>
#include <string>

/*
void Foo(const std::string& param) {}

class String {
  size_t size_;  // 64 bit (8 byte)
  char* data_;   // 64 bit (8 byte)
};
*/

struct Student {
  std::string name_;
  int group_;
  double grade_;
};

Student* findBest(int size, Student students[]) {
  if (size <= 0) return nullptr;
  Student* beststudent = &students[0];
  int mx = 0;
  for (int i = 0; i < size; ++i) {
    if (students[i].grade_ > mx) {
      mx = students[i].grade_;
      beststudent = &students[i];
    }
  }
  return beststudent;
}

Student* findWorst(int size, Student students[]) {
  if (size <= 0) return nullptr;
  Student* worststudent = &students[0];
  int mn = 1000;
  for (int i = 0; i < size; ++i) {
    if (students[i].grade_ < mn) {
      mn = students[i].grade_;
      worststudent = &students[i];
    }
  }
  return worststudent;
}

float findAverage(int size, Student students[]) {
  float ave = 0.0;
  for (int i = 0; i < size; ++i) {
    ave += students[i].grade_;
  }
  return ave / size;
}

int main() {
  Student arr_stud[] = {
      {"Nik", 1, 7.3}, {"Sam", 2, 6.2}, {"Ben", 1, 8.7}, {"Sara", 2, 5.1}};
  Student* best = findBest(4, arr_stud);
  std::cout << "Best student is " << best->name_
            << " with grade = " << best->grade_ << "\n";
  Student* worst = findWorst(4, arr_stud);
  std::cout << "Worst student is " << worst->name_
            << " with grade = " << worst->grade_ << '\n';
  float average = findAverage(4, arr_stud);
  std::cout << "Average grade is " << average << '\n';
}

/*
char c = 'a';
std::cout << char(c + 20) << '\n';
char* a = "abc";
char* b = "de";
std::string a = "abc";
std::string b = "foobar";
std::cout << b + a << ' ' << a.size() << ' ' << a.length() << '\n';
a.resize(2);
std::cout << b.substr(1, 10) << '\n';
a += "foo";
*/