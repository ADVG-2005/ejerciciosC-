#include <iostream>
using namespace std;

void carreraBuses(){
    string bus1 = "|_o___o__|";
    string bus2 = "|_o___o__|/";
    bool carrera = true;
    while (carrera){
        for(int i=0;i<=10;i++){
            for(int j=0;j<=10;j++){
                cout <<"--------"<<bus2;
                cout <<"--------"<<bus1;
            }
            carrera = false;
        }
        cout <<endl;
    }
}