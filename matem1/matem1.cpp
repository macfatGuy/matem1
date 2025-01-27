﻿// main.cpp
#include <iostream>
#include <stdexcept>
#include "math_functions.h" // Подключаем заголовочный файл с математическими функциями

using namespace std;

int main() {
    double num1, num2;
    int operation;

    // Запрос ввода от пользователя
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    cin >> operation;

    try {
        switch (operation) {
        case 1:
            cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
            break;
        case 2:
            cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
            break;
        case 5:
            cout << num1 << " в степени " << static_cast<int>(num2) << " = " << power(num1, static_cast<int>(num2)) << endl;
            break;
        default:
            cout << "Неверная операция!" << endl;
            break;
        }
    }
    catch (const invalid_argument& e) {
        cout << "Ошибка: " << e.what() << endl;
    }

    return 0;
}

