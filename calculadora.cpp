#include <iostream>

using namespace std;

int main(){

int Procedimiento; 
    Procedimiento =0;
cout <<"Selecct the operation you want to do"<<endl;
cout <<"1.Suma"<<endl;
cout <<"2.Resta"<<endl;
cout <<"3.Multiplicacion"<<endl;
cout <<"4.Division"<<endl;
cout <<"5.Salir"<<endl;

switch (Procedimiento)
{
case 1:
    Procedimiento = (Procedimiento + Procedimiento)
    cout << Procedimiento <<endl;
    break;
    case 2:
    Procedimiento = (Procedimiento - Procedimiento)
    cout << Procedimiento <<endl;
    case 3:
    Procedimiento = (Procedimiento * Procedimiento)
    cout << Procedimiento <<endl;
    case`4:
    Procedimiento = (Procedimiento / Procedimiento)
    cout << Procedimiento <<endl;



default:
    break;
}

return 0;

}