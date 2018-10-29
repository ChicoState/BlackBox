#include "BlackBox.h"

template <class Type>
void BlackBox<Type>::add(Type item)
{
  box.push(item);  
}

template <class Type>
Type BlackBox<Type>::remove()
{
  Type item = box.top();
  box.pop();
  return item;
}