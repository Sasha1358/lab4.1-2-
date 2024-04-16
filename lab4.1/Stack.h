#pragma once
#include <vector>
#include"List.h"
class Stack : public List {
private:
    std::vector<int> elements;
    int size_;
public:
    Stack() : size_(0) {}
    void add(int value) override;
    void remove(int value) override;
    int size() const override { return size_; }
};

