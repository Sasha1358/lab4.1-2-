#include "Queue.h"
#include <iostream>
void Queue::add(int value) {
    elements.push_back(value);
    ++size_; // «б≥льшуЇмо розм≥р при додаванн≥ елемента
    std::cout << "Queue values after adding " << value << ": ";
    for (int element : elements) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}
void Queue::remove(int value) {
    if (!elements.empty()) {
        std::cout << "Removing value: " << value << std::endl;
        elements.erase(elements.begin());
        --size_; // «меншуЇмо розм≥р при видаленн≥ елемента
        std::cout << "Queue values after removing: ";
        for (int element : elements) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
}
