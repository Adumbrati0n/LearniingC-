#include <iostream>

int main() {
  int direction;
  std::cout << "Input a direction (0 or 1 or 2): ";
  std::cin >> direction;

  if (direction == 1)
  {
    std::cout << "Go Right.\n";
    std::cout << "Drive to Maccas.\n";
  }
  else if (direction == 0)
  {
    std::cout << "Go Left.\n";
    std::cout << "Drive to KFC.\n";
  }
  else if (direction == 2)
  {
    std::cout << "Go Straight.\n";
    std::cout << "Drive Home.\n";
  }
  else
  {
    std::cout << "Please select a number 0, 1 or 2.\n";
  }
}
