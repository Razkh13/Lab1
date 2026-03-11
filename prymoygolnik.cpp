#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int dlina = 0;
    int shirina = 0;
    cout << "Введите длину прямоугольника ";
    cin >> dlina;
    cout << "Введите ширину прямоугольника ";
    cin >> shirina;
    int P = (dlina + shirina) * 2;
    int S = dlina * shirina;
    double D = sqrt(pow(dlina, 2) + pow(shirina, 2));
    cout << "Периметр, площадь и длина диагонали вашего прямоуголька равны: ";
    cout << P << " " << S << " " << D;

    return 0;
}