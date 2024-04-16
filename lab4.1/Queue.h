#pragma once
#include"List.h"
#include <vector>
class Queue : public List {
private:
    std::vector<int> elements;
    int size_;
public:
    Queue() : size_(0) {}
    void add(int value) override;
    void remove(int value) override;
    int size() const override { return size_; }
};

