//This is a repeat of the exercise that I did before but this time I need to use a for statement instead of while
//1. Header
//2. declare variables: count 1 = 1 and a = 
#include <iostream>
int main (){
  int count = 0;
  for (int a = 0; a <=10; ++a)
    count -= a;
  std::cout << "\n!"<< count << std::endl;
  return 0;
}
