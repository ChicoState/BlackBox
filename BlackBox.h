#ifndef BLACK_BOX_H
#define BLACK_BOX_H
#include "BlackBoxInterface.h"
#include <stack>

template <class Type>
class BlackBox : public BlackBoxInterface<Type>
{
  private:
    std::stack <Type> box;

  public:

    // Adds an item to the box
    void add(Type);

    // Removes the last item added to the box (or null if empty)
    Type remove();
};

#endif