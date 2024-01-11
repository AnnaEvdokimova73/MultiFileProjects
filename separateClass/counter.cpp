#include "counter.h"

Counter::Counter(int count)
{
    this->count = count;
}

void Counter::increment()
{
    this->count++;
}

void Counter::decrement()
{
    this->count--;
}

int Counter::currentValue() const
{
    return this->count;
}