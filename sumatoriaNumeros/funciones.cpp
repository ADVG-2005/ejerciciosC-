#include <iostream>
using namespace std;

void sumatoriaRecursiva(int n){
    int suma = 0;
    for (int i=1;i<=n;i++){
        suma +=i;
    }
    cout <<suma ;
}