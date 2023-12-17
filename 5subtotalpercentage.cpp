#include <iostream>
using namespace std;

int main() {
  
  int marks[5];
  int sum = 0;
  float avg;
  float percent;

  
  cout << "Enter marks of 5 subjects: ";
  for (int i = 0; i < 5; i++) {
    cin >> marks[i];
    sum += marks[i];
  }

  
  avg = sum / 5.0;
  percent = avg * 100.0;

  cout << "Grand total: " << sum << endl;
  cout << "Average: " << avg << endl;
  cout << "Percentage: " << percent << "%" << endl;

  return 0;
}