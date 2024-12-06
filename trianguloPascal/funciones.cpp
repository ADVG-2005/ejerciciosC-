#include <iostream>
using namespace std;
void trianguloPascal(int filas){
    for(int i = 1 ; i <= filas ; i++){
        for(int j = 1 ; j <= filas - i ; j++ ){
            cout << " ";
        }
        for(int l = 1 ; l <= (i * 2) - 1 ; l++){
            cout << "o";
        }
        cout << endl;
    }
}