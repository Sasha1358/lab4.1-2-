#include "Stack.h"
#include <iostream>
void Stack::add(int value) {
    elements.push_back(value);
    ++size_; // �������� ����� ��� �������� ��������
    std::cout << "Stack values after adding " << value << ": ";
    for (int element : elements) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}
void Stack::remove(int value) {
    if (!elements.empty()) {
        std::cout << "Removing value: " << value << std::endl;
        elements.pop_back();
        --size_; // �������� ����� ��� �������� ��������
        std::cout << "Stack values after removing: ";
        for (int element : elements) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
}
