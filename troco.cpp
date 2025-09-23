#include <iostream>
#include <iomanip>

int main() {
    double r;
    const double PI = 3.14159;

    std::cout << "Digite o valor do raio: ";
    std::cin >> r;

    double area = PI * r * r;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "AREA = " << area << std::endl;

    return 0;
}