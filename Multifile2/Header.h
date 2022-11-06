#pragma once
class Counter {
private:
    int value;
public:
    Counter(int v1);
    Counter();
    void increase();
    void decrease();
    int present();
};