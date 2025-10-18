#include <iostream>

int main(){
    int a = 1;
    int b = 2;
    int c = 2;
    int d = 2;
    // a += 1
    // a = a + 1
    a ++;
    b --;
    c *= 2;
    d /= 2;
    int x = 5;
    double y = 10;
    x /=2; // 2 will be the output not 2.5 because here x is int so decimal part will be truncated.
    y /=3; // now 3.33 will be printed because here y is a decimail no.
    int sum = a + b;
    double value = 1+3/3*6;
    double value_2 = 1+6/3*2;
    
    std::cout << value << "\n";
    std::cout << value_2 << "\n";
    std::cout << sum << "\n";
    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";
    std::cout << d << "\n";
    return 0;
}


