# include <iostream>
int main_1(){
    std::string name;
    std::cout<< "Hello ";
    std::cin >> name; // HERE THE PROBLEM IS THAT IF  WE ENTER THE FULL NAME LIKE ABHISHEK SHAHI, SHAHI GETS OMIITED AND ONLY ABHISHEK GETS PRINTED. TO FIX THIS WE USE

    std::cout << "How many years old are you? ," << name << std::endl;
    
}
//  IN THE DINPUT FUNCTION (std::cin >> )THERE IS A BY DEFAULT NEW LINE CHARACTER 

int main_2(){
    std::string name;
    std::cout<< "Hello ";
    std::getline(std::cin, name);
    std::cout << "How many years old are you? ," << name << std::endl;
}


int main_3(){
    std::string name;
    int age;

    std::cout<< "You are ";
    std::cin >> age;
    std::cout<< "Your name is ";
    std::getline(std::cin , name);
    //HERE we are using input function before get line thats why thsi issue is coming
    //  You are 17
// Your name is  
// To correct this we do
}

int main_4(){
    std::string name;
    int age;
    std::cout<< "You are ";
    std::cin >> age;
    std::cout<< "Your name is ";
    std::getline(std::cin >> std::ws, name);

    // NOW THE DESIRED OUTPUT IS PRINTED THAT IS
    // You are 17
// Your name is ABHISHEK SHAHI

}
int main(){
    // main_1();
    // main_2();
    // main_3();
    main_4();
    return 0;
}