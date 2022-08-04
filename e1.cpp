//This is a file that I'm writing to practice my c++ programming skills 
//
//1. Define data type 'newsum' as an integer
//
//2. Need to craft if statement with a.)starting point b,)max range c.)and incrementer 
//3. Output values and close stream
//
#include <iostream>
int main (){

  int newsum = 0;
  for (int a = 50; a <=100; ++a)
    newsum += a;
  std::cout << "The sume of 50 to 100 inclusive is "<< newsum << std::endl;
  return 0;
}
