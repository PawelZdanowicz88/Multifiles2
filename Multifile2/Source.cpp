#include "Header.h"

    Counter::Counter(int v1) :
        value(v1)
    {
    }
    Counter::Counter() :
        value(1)
    {
    }
    void Counter::increase() {
        value = value + 1;
    }
    void Counter::decrease() {
        value = value - 1;
    }
    int Counter::present() {
        return value;
    }