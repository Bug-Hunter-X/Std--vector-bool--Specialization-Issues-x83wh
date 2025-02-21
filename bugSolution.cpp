#include <iostream>
#include <vector>
#include <bitset>

int main() {
  // Problematic usage:
  std::vector<bool> vecBool(10);
  for (size_t i = 0; i < vecBool.size(); i++) {
    vecBool[i] = (i % 2 == 0);
  }

  // Using std::vector<char> for proper boolean representation
  std::vector<char> vecChar(10);
  for (size_t i = 0; i < vecChar.size(); i++) {
    vecChar[i] = (i % 2 == 0) ? 1 : 0;
  }

  // Or using std::bitset for bit manipulation
  std::bitset<10> bitset10;
  for(size_t i=0; i < 10; ++i){
    bitset10[i] = (i%2 == 0);
  }
  
  std::cout << "Vector<bool>: ";
  for (bool b : vecBool) {
    std::cout << b;
  }
  std::cout << std::endl;

  std::cout << "Vector<char>: ";
  for (char c : vecChar) {
    std::cout << c;
  }
  std::cout << std::endl;

  std::cout << "Bitset: " << bitset10 << std::endl;

  return 0;
}