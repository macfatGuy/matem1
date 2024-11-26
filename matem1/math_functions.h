// math_functions.h
#ifndef MATH_FUNCTIONS_H
#define MATH_FUNCTIONS_H

// Функция сложения
double add(double a, double b) {
    return a + b;
}

// Функция вычитания
double subtract(double a, double b) {
    return a - b;
}

// Функция умножения
double multiply(double a, double b) {
    return a * b;
}

// Функция деления
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        throw std::invalid_argument("Деление на ноль!");
    }
}

// Функция возведения в степень
double power(double base, int exp) {
    double result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

#endif // MATH_FUNCTIONS_H

