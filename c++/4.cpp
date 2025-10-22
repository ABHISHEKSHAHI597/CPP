#include<iostream>
using namespace std;
// *************************************************USE OF BREAK****************************************************
// int main(){
//     for (int i =1; i <= 10; i ++ )
//     {
//         cout<< i<<endl;
//         if (i%2==0){
//             break;
//         }
//     }
//     cout<< "break\n";
    
//     for (int i =1; i <= 10; i ++ )
//     {
//         if (i%2==0){
//             break;
//         }
//         cout<< i<<endl;
//     }
//     return 0;
// }



// *************************************************USE OF CONTINUE************************************************
int main(){
    for (int i = 1; i<=20; i ++)
    {
        if (i%2 == 0){
            continue;
        }
        cout<< i << endl;
    }
    return 0;
}

