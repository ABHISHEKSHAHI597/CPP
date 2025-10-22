#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    char op;
    cout<<"Enter num1: \n";
    cin>>num1;
    cout<<"Enter num2:\n";
    cin>>num2;
    cout<< "Enter the operator: \n";
    cin >> op;
    switch(op){
        case('+'):
            cout<< num1 + num2;
            break;
        case('-'):
            cout<< num1 - num2;
            break;
        case('*'):
            cout<< num1 * num2;
            break;    
        case('/'):
            cout<< num1 /(double) num2;
            break;
        default:
        cout<<"Enter the correct operator\n";
        }
    return 0;
}

