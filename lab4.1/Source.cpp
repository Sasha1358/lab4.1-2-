#include "Queue.h"
#include "Stack.h"
#include <iostream>

int main() {
    Stack stack;
    Queue queue;

    List* list[2]; // Масив вказівників на базовий клас

    list[0] = &stack; // Присвоєння адреси об'єкту стеку
    list[1] = &queue; // Присвоєння адреси об'єкту черги

    // Додавання та вилучення елементів для об'єкта типу стек
    stack.add(10);
    std::cout << "Size after adding to stack: " << stack.size() << std::endl;
    stack.remove(5);
    std::cout << "Size after removing from stack: " << stack.size() << std::endl;

    // Додавання та вилучення елементів для об'єкта типу черга
    queue.add(30);
    std::cout << "Size after adding to queue: " << queue.size() << std::endl;
    queue.remove(3);
    std::cout << "Size after removing from queue: " << queue.size() << std::endl;

    // Виведення справжнього типу поліморфних об'єктів
    std::cout << "Real type of list[0]: " << typeid(*list[0]).name() << std::endl;
    std::cout << "Real type of list[1]: " << typeid(*list[1]).name() << std::endl;

    return 0;
}
