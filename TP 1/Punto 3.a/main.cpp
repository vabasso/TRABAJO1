#include <iostream>

using namespace std;

int main()


{
    double kmh =0;
    double mts =0;
    cout << "Ingrese el valor en Km/h" << endl;
    cin >> kmh;
    mts= kmh * 1000/3600;
    cout << "El valor en mt/s es de " << mts;


    return 0;
}
