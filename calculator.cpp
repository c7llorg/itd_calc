#include<iostream>
#include<iomanip>

int main() {

    double var_first = 0.0, var_second = 0.0;
    char operation = '/';

    std::cout << "Добро пожаловать в калькулятор!" << std::endl
    << "Выполнено Коневом Михаилом и Данилкиной Елизаветой, ИТД-11М" << std::endl
    << "Введите первое число: ";
    std::cin >> var_first;
    std::cout << std::endl << "Введите второе число: ";
    std::cin >> var_second;
    std::cout << std::endl << "Выберите операцию (+ - * /):";
    std::cin >> operation;
    std::cout << "Testing: " << var_first << var_second << operation;
    return 0;
}