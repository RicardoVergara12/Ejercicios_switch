#include <iostream>
#include <cmath> /*Se agrega esta biblioteca especialmente para poder realizar operaciones con potenciacion
usando pow*/

using namespace std;

int main(){

int option;
float numero1, numero2, resultado;
numero1 =0;
numero2 =0;
cout <<"Welcome to my personal calculator feel free to choose witch operation you wish to make" <<endl;
cout <<"1.Sum" <<endl;
cout <<"2.Rest"<<endl;
cout <<"3.Multiplication"<<endl; //menu en el cual el usuario tendra a elegir que operaecion necesita.
cout <<"4.Division"<<endl;
cout <<"5.Raise"<<endl;
cout <<"6.Mod"<<endl;
cin >> option;

cout <<"Enter the fist number"<<endl;
cin >> numero1;

cout <<"Enter the second number"<<endl;
cin >> numero2;

if (option >=1 && option <=6) //toda la calculadora y todo su cuerpo
{
    switch (option)
    {
    case 1:
        resultado = numero1 + numero2;
        cout <<"Su resultado es: "<<resultado<<endl;
        break;
    case 2:
     resultado = numero1 - numero2;
     cout <<"Su resultado es: "<<resultado<<endl;
     break;
     case 3:
     resultado = numero1 * numero2;
     cout <<"Your result is: "<<resultado<<endl;
     break;
     case 4:
     resultado = numero1 / numero2;
     cout <<"Your result is: "<<resultado<<endl;
     break;
     case 5:
     resultado = pow(numero1,numero2);
     cout <<"Your result is: "<<resultado<<endl;
     break;
     case 6:
     resultado = (int)numero1 % (int)numero2;
     cout<< "Your result is: "<<resultado<<endl;

    default:
    cout<<"Enter a valid caracter"<<endl;
        break;
    }
}else{ //en dado caso el usuario o se equivoque o ingrese un valor no valido.
    cout <<"Enter a valid option provided above"<<endl;

}










return 0;



}