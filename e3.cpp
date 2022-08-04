//to build this project I'm going to use a few of the elements from the previous exercise  to simply print the sum from 10 to 0 I think that by simply sating the variable it will print it sequentially down to 0 if I define it correctly in the beginning.
//
//1. Header
//2. Declare two variables: count = 0 , tick = 1
//3. While statement (<=10)
//4. count -= tick 
//5. increment but in the negative direction --tick
//6. declare variable count, return 0
//
#include <iostream>
int main (){
  int print =10;
  while (print <=0) {
    std::cout << "\n"<< print;
   --print;
    }
  return 0;
}

