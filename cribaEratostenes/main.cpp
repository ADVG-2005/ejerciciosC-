#include <iostream>
#include "funciones.hpp"
using namespace std;


int main(){
    int n;
    cout <<"Ingrese un numero: ";
    cin >>n;
    cribaEratostenes(n);

    return 0;
}