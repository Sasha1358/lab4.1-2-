#include "Queue.h"
#include "Stack.h"
#include <iostream>

int main() {
    Stack stack;
    Queue queue;

    List* list[2]; // ����� ��������� �� ������� ����

    list[0] = &stack; // ��������� ������ ��'���� �����
    list[1] = &queue; // ��������� ������ ��'���� �����

    // ��������� �� ��������� �������� ��� ��'���� ���� ����
    stack.add(10);
    std::cout << "Size after adding to stack: " << stack.size() << std::endl;
    stack.remove(5);
    std::cout << "Size after removing from stack: " << stack.size() << std::endl;

    // ��������� �� ��������� �������� ��� ��'���� ���� �����
    queue.add(30);
    std::cout << "Size after adding to queue: " << queue.size() << std::endl;
    queue.remove(3);
    std::cout << "Size after removing from queue: " << queue.size() << std::endl;

    // ��������� ����������� ���� ���������� ��'����
    std::cout << "Real type of list[0]: " << typeid(*list[0]).name() << std::endl;
    std::cout << "Real type of list[1]: " << typeid(*list[1]).name() << std::endl;

    return 0;
}
