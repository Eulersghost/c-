//Our numbers again are starting from 50 and being added all the way up to 100 so this time around I need to write it for a while loop 
//So in this case we will start with the usual header
//New variable checksum = 50
//initialize while statement while (newval <=100)
//Need to create a separate piece that is the incrementer shinyval=1
//Combine both pieces sum +=newval 
//Declare and initialize incrementer ++shinyval
//
#include <iostream>
int main (){
  int checksum = 50, shinyval = 1;
  while (shinyval <=100) {
    checksum += shinyval;
    ++shinyval;
  }
  std::cout << "The sum of 50 to 100 inclusive is "<< checksum << std::endl;
  return 0;
}
