#pragma once
class Counter {
private:
    int value;
public:
    Counter(int v1) :
        value(v1)
    {
    }
    Counter() :
        value(1)
    {
    }
    void increase() {
        value = value + 1;
    }
    void decrease() {
        value = value - 1;
    }
    int present() {
        return value;
    }
};