#include <iostream>
using namespace std;

int multiplyby2(int n)
{
  return n * 2;
}
int main() {
  for (int i = 0; i < 10; i++)
  cout << multiplyby2(i) << "\n";
}
