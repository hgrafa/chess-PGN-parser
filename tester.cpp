#include <iostream>

using namespace std;

struct complex{
  int real, imaginary;

  void aumentaReal(int increment){
    real += increment;
    //  real = real + increment 
  }

};

int main(void){

  complex z;

  z.real = 1;
  z.imaginary = 2;

  cout << z.real<< "+" << z.imaginary<< "i\n";

  z.aumentaReal(5);

  cout << z.real << "+" << z.imaginary<< "i\n";

  return 0;
}