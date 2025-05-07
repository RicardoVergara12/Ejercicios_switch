#include <iostream>
/*Tarea: Este fin de semana tendra que salir a algun lugar recreativo usando if else y switch en el codigo
en ingles, con cometarios, repositorios.+*/

using namespace std;
/*Suponiendo lo siguiente, en mi caso este fin de semana tuve que salir a trabajar con mi madre en su emprendimiento, pero debido a
que su trabajo requiere mucho de salir fuera de San Salvador y manejar por los diferentes pueblos aledaños, la salida se hace
bastante placentera. Tomando esto en cuenta, el codigo se tratara sobre los diferentes pueblos a visitar para vender y de paso conocer*/
int main()
{

    int diligence;
    cout << "Going out of San Salvador you have 4 options of destiny to choose and go there to explore and sell your merch: " << endl;
    cout << "1.Aguilares" << endl;
    cout << "2.San Miguel" << endl;
    cout << "3.Cabañas" << endl;
    cout << "4.Usulutan" << endl;
    cout << "Having knowledge that that in the estern zone of the country has mas more demand on saturday. So which department do i have to go if i want to sell without failing on the try?" << endl;
    cin >> diligence;

    if (diligence > 1 && diligence < 5)
    {
        switch (diligence)
        {
        case 2:
        case 4:
            cout << "The department you select is ubicated in the estern side of the country, so you succesfully sold all you merch and also eplored on the way B)" << endl;
            break;
        case 1:
        case 3:
            cout << "The departmen you selected didnt belong to the estern side of the country, sadly you failed on you mission to sell your merch, but at least you explored and discovered new places :(" << endl;
        default:
            // Decidi omitir mensaje de default, ya que me parecia inncecesario ya que cerrando el switch con sus casos posibles, con else se puede concretar perfectamente los casos infortunios.
            break;
        }
    }
    else
        cout << "The departmen you selected didnt belong to the estern side of the country, sadly you failed on you mission to sell your merch, but at least you explored and discovered new places :(" << endl;

    return 0;
}