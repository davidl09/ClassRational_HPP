#include "rational.hpp"

int main(){
    LinAlg::Rational a(3, 4);
    std::cout << a << "\n";

    LinAlg::Rational b("4/5");
    std::cout << b.approx() << "\n";

    LinAlg::Rational c("3^4");
    std::cout << c << "\n";

    LinAlg::Rational d(3), e(2);
    d^e;
    std::cout << d << std::endl;
}