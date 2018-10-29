#ifndef BLACK_BOX_INTERFACE
#define BLACK_BOX_INTERFACE

template <typename T>
class BlackBoxInterface
{
  public:
    // Adds an item to the box
    virtual void add(T) = 0;

    // Removes the last item added to the box (or null if empty)
    virtual T remove() = 0;
};

#endif