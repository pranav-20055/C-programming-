#include <iostream>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calculator;

    int result1 = calculator.add(5, 10);
    double result2 = calculator.add(3.5, 2.5);

    std::cout << "Integer Addition Result: " << result1 << std::endl;
    std::cout << "Double Addition Result: " << result2 << std::endl;

    return 0;
}
