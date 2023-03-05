#include <iostream>
#include <locale>
using namespace std;
class rational {
private:
    int a, b;
public:
    void set(int a1, int b1) {
        a = a1;
        b = b1;
    }
    rational() {

    }
    rational(int a1, int b1) {
        a = a1;
        b = b1;
        if (b == 0) {
            cout << "Знаменатель равен 0" << endl;
        }
        else {
            if (a > b) {
                int rest;
                rest = (a % b);
                cout << "Дробная часть = " << rest << "/" << b << endl;
            }
            else if (b > a) {
                if (b % a == 0) {
                    b /= a;
                    a = 1;
                }
            }
        }
    }
    void show() {
        if (b > a) {
            cout << a << "/" << b << endl;
        }
    }
};
