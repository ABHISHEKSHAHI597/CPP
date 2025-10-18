#include <iostream>
int test_1(){
    /*there are 2 ways of converting data types one is automatic and other is the manual way*/
        char x = 100; //it displays the coresponding ascii values
        double y  = (int) 3.14; // converting decimal no. into integer
        //  the symbol / is used for integer division for using decimal as output we do /(double)
        std::cout<< x << std::endl;
        std::cout<< y << std::endl;
        return 0;
}
int test_2(){
    // calculating percentage 
    int marks = 80;
    int maxm_marks = 100;
    std::cout << marks/maxm_marks*100 << "%"<< "\n";   // bcz here 0.8 = 0 bcz it is itneger decision
    std::cout << marks/(double)maxm_marks*100 << "%";   // decimal division
}

int test_3(){

}
int main(){
    test_1();
    test_2();
    test_3();
    return 0;
}
