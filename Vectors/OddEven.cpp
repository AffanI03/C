#include <iostream>
#include <vector>

int main() {
  int even = 0;
  int odd = 1;
  std::vector<int> num = {2, 4, 3, 6, 1, 9, 8, 0, 8, 5, 7, 3, 3};

  for(int i = 0; i < num.size(); i ++){
    if (num[i] % 2 == 0) {
      even = even + num[i];
    }
    else{
      odd = odd * num[i];
    }
  }
  std::cout << "The sum of even numbers: " << even << "\n";
  std::cout << "The product of odd numbers: " << odd << "\n";


}