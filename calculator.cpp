#include "calculator.h"

// Sums two doubles
int Calculator::add (double a, double b)
{
    return a + b;
}

// Subs two doubles
int Calculator::sub (double a, double b)
{
    return add (a, -b);
}

// Muls two doubles
int Calculator::mul (double a, double b)
{
    return a * b;
}

// Divs two doubles
int Calculator::div (double a, double b)
{
    return a / b;
}
