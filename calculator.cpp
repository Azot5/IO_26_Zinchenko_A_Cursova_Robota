#include "calculator.h"

int Calculator::Add (double a, double b)
{
<<<<<<< HEAD
	return a + b;
=======
	return a + b + 0.5;
>>>>>>> 4ad40a3b4572deee4efc716e7bd6e6e4fda46dcf
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

// Додавання нової операції: обчислення залишку від ділення
int modulus(int a, int b) {
  if (b == 0) {
    throw std::invalid_argument("Division by zero");
  }
  return a % b;
}
