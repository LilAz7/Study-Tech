#include <iostream>;

using namespace std;

int main()

{
    setlocale(LC_ALL, "Russian");
    cout << "������� ������������ ���������" << endl;
    double a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    eq2 equation(a1, b1, c1);
    equation.find_X();
    cout << "������� X" << endl;
    float X;
    cin >> X;
    equation.find_Y(X);
    cout << "��� �������� X,Y = " << equation.find_Y(X) << endl;
}