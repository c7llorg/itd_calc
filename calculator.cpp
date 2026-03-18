#include<iostream>
#include<iomanip>

void init_calc(double &var_first, double &var_second, char &operation)
{
    // Через ссылку вводим переменные, что бы изменять их прямо в main
    // Сломается если ввести неправильный тип данных
    std::cout << "Введите первое число: ";
    std::cin >> var_first;
    std::cout << "Введите второе число: ";
    std::cin >> var_second;
    std::cout << "Выберите операцию (+ - * /): ";
    std::cin >> operation;
}

int process_calculations(char op, int &count) {
    // Функция, где мы проводим вычисления, если операция не поддерживается, возвращаем код ошибки
    // При возврате 0 программа просит ввести данные заново, при 1 — завершается
    switch (op)
    {
    case ('+'):
    {
        // Сложение выполнить здесь
        break;
    }
    case ('-'):
    {
        // Вычитание выполнить здесь
        break;
    }
    case ('/'):
    {
        // Деление выполнить здесь
        break;
    }
    case ('*'):
    {
        // Умножение выполнить здесь
        break;
    }
    default:
    {   
        std::cout << "Ошибка! Операция не поддерживается. Попробуйте еще раз." << std::endl;
        if (++count >= 5)
            return 1;
        else
            return 0;
    }
    }
    return 1;
}

int main() {

    double var_first = 0.0, var_second = 0.0;
    char operation = '+';
    bool exit_status = false;
    int loop_count = 0;
    // loop_count - переменная для защиты от цикла ошибок. можно случайно ввести что-то не то и программа уйдет в цикл, костыль

    std::cout << "Добро пожаловать в калькулятор!" << std::endl
    << "Конев Михаил, Данилкина Елизавета, ИТД-11м" << std::endl;

    do {
        init_calc(var_first, var_second, operation);
        exit_status = process_calculations(operation, loop_count);
    } while (!exit_status);
    // Программа в цикле, пока не выполнит свою функцию

    return 0;
}