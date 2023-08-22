#include <iostream>
#include "headers/suma.num.h"
#include "headers/suma.str.h"

int main(){
  std::cout << str::suma("Hola ", "mundo") << std::endl;
  std::cout << num::suma(2, 1) << std::endl;
  return 0;
}