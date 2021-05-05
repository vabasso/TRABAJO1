#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_CTYPE,"Spanish");

    double m1 = 0;
    double m2 = 0;
    double b1 = 0;
    double b2 = 0;
    double intersecm = 0;
    double intersecb = 0;
    double intersecx = 0;
    double intersecy = 0;


    cout << "Ingrese la pendiente de la primer ecuacion de la recta: ";
    cin >> m1;

    cout << "Ingrese el término independiente de la primer ecuacion de la recta: ";
    cin >> b1;

    cout << "Ingrese la pendiente de la segunda ecuacion de la recta: ";
    cin >> m2;

    cout << "Ingrese el término independiente de la segunda ecuacion de la recta: ";
    cin >> b2;

    intersecm = m1 - m2;
    intersecb = b1 - b2;
    intersecx = (-1 * intersecb) / intersecm;
    intersecy = (m1 * intersecx) + b1;

    if(m1 == m2 && b1 != b2){

    cout << "Ambas rectas son paralelas, entonces, no se intersecan en ningún punto";

    } else if(m1 == m2 && b1 == b2){

    cout << "Las rectas son iguales, entonces, se cruzan infinitas veces";

    } else {


    cout << "EL punto donde intersecan las rectas es: (" << intersecx << " ; " << intersecy << ")";

    }

    return 0;

}
