#include "Queue.h"
#include <iostream>
void Queue::add(int value) {
    elements.push_back(value);
    ++size_; // �������� ����� ��� �������� ��������
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
        --size_; // �������� ����� ��� �������� ��������
        std::cout << "Queue values after removing: ";
        for (int element : elements) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
}
