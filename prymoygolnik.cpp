#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int dlina, shirina;
    cout << "Введите длину прямоугольника ";
    cin >> dlina;
    cout << "Введите ширину прямоугольника ";
    cin >> shirina;
    int P = (dlina + shirina) * 2;
    int S = dlina * shirina;
    double D = sqrt(pow(dlina, 2) + pow(shirina, 2));
    cout << "Периметр, площадь и длина диагонали вашего прямоуголька равны: ";
    cout << P << " " << S << " " << D << endl;
    cout << "Параметры прямоугольника посчитаны!" << endl;
    return 0;
}