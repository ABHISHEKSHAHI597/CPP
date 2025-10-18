// --> BASIC SENTENCE PRINTING

#include <iostream>
using namespace std;

int test()
{
    cout << "1 Hello World, I am learning CPP" << std::endl;
    cout << "2 Hello World, I am learning CPP" << '\n';
    cout << "\n3 Hello World, I am learning CPP" << "\n";
    cout << "\n4 Hello World, I am learning CPP" << std::endl;
    cout << "\n5 Hello World, I am learning CPP" << '\n';
    return 0;
}

// or we can write the same above program by the method given below -->
// #include<iostream>
// int main(){
//     std::cout << "Hello World, I am learning CPP" << std::endl;
//     std::cout << "Hello World, I am learning CPP";
// }

// For making single line comments we use double forward slash

/*FOR MAKING MULTI LINE COMMENTS
WE USE FORWARD SLASH THEN ASTERICS THEN THE COMMENT AND THEN ASTERICS AND FORWARD SLASH */

// --> VARIABLES AND DATA TYPES

int data_types()
{
    /*
         for storing integers we use int
         for storing decimals we use double
         for storing single characters we use char
         if we store multiple variables in char then only the last character will be displayed
         for storing boolean values we use bool
         for storing strings we use std::strings ........and so on
    */
    // in cpp for storing characters we use single quotes if we use double quotes then we get error
    // in cpp for storing strings we use double quotes if we use single quotes then we get error

    int x;     // decalration
    x = 1;     // assignment
    int y = 2; // both declaration and assignment
    int sum = x + y;
    int z = 9.99;    // if we try to store decimals in int then the decimal part gets truncated
    double a = 9.99; // used to store decimals
    char currency = '$';
    // char* _name = {'A', 'b','h', 'i', 's', 'h', 'e', 'k', '\0'};
    char letter = 'k';
    bool boolean_1 = true;
    bool boolean_2 = false;
    std::string name = "Abhishek";
    std::string age = "17";
    std::string city = "Agra";

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << sum << '\n';
    std::cout << z << "\n";
    std::cout << a << "\n";
    std::cout << currency << "\n";
    std::cout << name << "\n";
    std::cout << boolean_1 << "\n";
    std::cout << boolean_2 << "\n";
    std::cout << name << "\n";
    std::cout << age << "\n";
    std::cout << city << "\n";
    std::cout << "Hello my name is " << name << " I am " << age << " years old." << "\n";
    std::cout << "I live in " << city << "!";
    return 0;
}

int main()
{
    // calling all the functions so that we get the output
    test();
    data_types();
    return 0;
}
