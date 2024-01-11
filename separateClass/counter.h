#pragma once

class Counter
{
public:
    Counter() : count{ 1 } {};
    Counter(int count);

    void increment();
    void decrement();
    int currentValue() const;

private:
    int count;
};