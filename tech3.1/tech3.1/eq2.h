#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
class eq2 {
private:
    double a, b, c;//Коэффициенты уравнения
    double D;      //Дискриминант
public:
    eq2(double a1, double b1, double c1) {   //Конструктор
        a = a1;
        b = b1;
        c = c1;
        D = pow(b, 2) - 4 * a * c;
    }
    void set(double a1, double b1, double c1) {
        a = a1;
        b = b1;
        c = c1;
        D = pow(b, 2) - 4 * a * c;
    }
    double find_X() {
        if (D > 0) {
            double x1, x2;
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            cout << "Первый корень x1 = " << x1 << endl;
            cout << "Второй корень x2 = " << x2 << endl;
            return x1;
            return x2;
        }
        else if (D == 0) {
            double x1;
            x1 = (-b / (2 * a));
            cout << "Единственный корень x = " << x1 << endl;
            return x1;
        }
        else {
            cout << "Корней нет" << endl;
            return 0;
        }
    }
    double find_Y(double x1) {
        return (a * pow(x1, 2) + b * x1 + c);
    }
};

