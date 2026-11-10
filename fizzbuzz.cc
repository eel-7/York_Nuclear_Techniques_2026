// fizzbuzz.cc - a ROOT macro to solve the fizzbuzz challenge in the nuclear
// techniques course
//
//
#include "TMath.h"
#include <iostream>

void fizzbuzz() {

  std::cout << "The fizzbuzz challenge. List the numbers 1 to 100."
    << std::endl;
  std::cout << "If the number divides by 3, output the word ``Fizz''"
    << std::endl;
  std::cout << "If the number divides by 5, output the word ``Buzz''"
    << std::endl;
  std::cout << "If the number divides by 3 AND 5, output the word ``FizzBuzz''"
    << std::endl;

  for (int i = 1; i < 101; i++) {
    if ( i%3 == 0 && i%5 == 0 ) {
      std::cout << "FizzBuzz" << std::endl;
    }
    else if ( i%3 == 0 ) {
      std::cout << "Fizz" << std::endl;
    }
    else if ( i%5 == 0 ) {
      std::cout << "Buzz" << std::endl;
    }
    else {
      std::cout << i << std::endl;
    }
  }
}
