#include <iostream>
using namespace std;


void cribaEratostenes(int n){
    bool primo ;
cout <<"Los numeros primos son: \n";
    for (int i=2;i<n;i++){
        primo = true;
        for (int j=2;j<i;j++){
            if (i % j == 0){
                primo=false;
            }
        }
        if(primo){
            cout <<i<<endl;;
        }
    }
}