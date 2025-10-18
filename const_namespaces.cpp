// USE OF const

// #include<iostream>
// int main(){
//     const double pi = 3.14;
//     pi = 2.14;   
//     std::cout<< pi;
//     return 0;
/* THIS IS SHOWING ERROR BECAUSE pi is only read only variable now*/
// }


// USE OF NAMESPACES
#include <iostream>
namespace first {
   int x = 1;
}

namespace second {
   int x = 2;
}

int test_1(){
    int x = 3;
    std::cout << x << std::endl;
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;
}

int test_2(){
    using namespace first;
    std::cout << x<< std::endl;
    std::cout << second::x<< std::endl;
    std::cout << first::x<< std::endl;
}

int main(){
    test_1();
    test_2();
    return 0;
}