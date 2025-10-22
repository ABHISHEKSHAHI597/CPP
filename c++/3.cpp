#include <iostream>
using namespace std;
// *************************************FOR LOOPS***********************************

// SYNTAX OF FOR LOOP 
// for(initialisation; condition; updation){
// c++ code
// }

// 1. printing a set of natural numbers 
// int main(){
//     for (int i=1; i < 11; i+=1)
// {
//     cout<< i << endl;
// }
//     return 0;
// }

// example of infinite for loop
// for (int = 1; 1==1; i ++)

// **********************************WHILE LOOPS*****************************************
// syntax of while loop
// while(condition)
// {
//     c++ code
// }

// int main(){
//     int i = 1;
//     while(i <= 40){
//     cout<< i<< endl;
//     i ++;}
//     return 0;
// }



// **********************************DO WHILE LOOPS***********************************
// IN THIS LOOP THE CONDITION IS CHECKED BEFORE RUNNING THE NEXT TIME EXCEPT FOR THE FIRST TIME

int main(){
    int i = 1;
    do{
        cout << i << endl;
        i ++;
    }while(2<1);
     
    do {
        cout<< i<< endl;
        i ++;
    }while( i>= 2 && i < 11);
    return 0;
}


