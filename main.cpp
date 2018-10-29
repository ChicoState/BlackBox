#include "BlackBox.h"
#include <iostream>

int main()
{
  BlackBox<int> numbers;
  int retrieved;

  numbers.add(0);
  numbers.add(100);
  numbers.add(50);
  numbers.add(200);

  do
  {
    retrieved = numbers.remove();
    std::cout<<retrieved<<std::endl;
    
  }while( retrieved );

  return 0;
}