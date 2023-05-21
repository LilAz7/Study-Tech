#include <iostream>
#include <cmath>
using namespace std;

class type1 {
public:
    void Get_answer() {
        cout << "������� �������� ����� �������� �" << endl;
    }
    void show() {
        cout << "��������� 0 = 0" << endl;
    }
};

class type2 {
private:
    double A;
public:
    type2(double a1) {
        A = a1;
    }
    void Get_answer() {
        cout << "������� �������� � = 0" << endl;
    }
    void show() {
        cout << "��������� " << A << "*x^2 = 0" << endl;
    }
};

class type3 {
private:
    double C;
public:
    type3(double c1) {
        C = c1;
    }
    void Get_answer() {
        cout << "������ ���" << endl;
    }
    void show() {
        cout << C << " = 0" << endl;
    }
};

class type4 {
private:
    double A, C;
public:
    type4(double a1, double c1) {
        A = a1;
        C = c1;
    }
    void Get_answer() {
        double k = ((-1) * C) / A;
        if (k >= 0) {
            double x1 = sqrt(k);
            double x2 = sqrt(k) * (-1);
            cout << "����� ���������: " << endl << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
        }
        else {
            cout << "������ ���" << endl;
        }
    }
    void show() {
        cout << "��������� " << A << "*x^2 + " << C << " = 0" << endl;
    }
    void Get_answer_podbor() {
        if ((((-1) * C) / A) < 0) {
            cout << "������ ������� ������� ���" << endl;
        }
        else {
            double min = abs(0 - A * (-20) * (-20) - C);
            double x = -20;
            for (double i = -20; i < 20.01; i = i + 0.01) {
                double temp = abs(0 - A * (i) * (i)-C);
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
            cout << "�����������, ���� �� ������ ���������: " << x << endl;
        }
    }
};

class type5 {
private:
    double B, C;
public:
    type5(double b1, double c1) {
        B = b1;
        C = c1;
    }
    void Get_answer() {
        cout << "������ ���������: " << (-1) * (C / B) << endl;
    }
    void show() {
        cout << "��������� " << B << "*x + " << C << " = 0" << endl;
    }
    void Get_answer_podbor() {
        double min = abs(0 - B * (-20) - C);
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            double temp = abs(0 - B * (i)-C);
            if (temp < min) {
                min = temp;
                x = i;
            }
        }
        cout << "�����������, ���� �� ������ ���������: " << x << endl;
    }
};

class type6 {
private:
    double A, B, C;
public:
    type6(double a1, double b1, double c1) {
        A = a1;
        B = b1;
        C = c1;
    }
    void Get_answer() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "��������� �� ����� �������������� ������" << endl;
        }
        else {
            if (D == 0) {
                double x = ((-1) * B - sqrt(D)) / (2 * A);
                cout << "������ ���������: " << x << endl;
            }
            else {
                double x1 = ((-1) * B - sqrt(D)) / (2 * A);
                double x2 = ((-1) * B + sqrt(D)) / (2 * A);
                cout << "����� ���������: " << endl;
                cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
            }
        }
    }
    void show() {
        cout << "��������� " << A << "*x^2 + " << B << "*x + " << C << " = 0" << endl;
    }
    void Get_answer_podbor() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "��������� �� ����� �������������� ������" << endl;
        }
        else {
            double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
            double x = -20;
            for (double i = -20; i < 20.01; i = i + 0.01) {
                double temp = abs(0 - A * (i) * (i)-B * i - C);
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
            cout << "�����������, ���� �� ������ ���������: " << x << endl;
        }
    }
};

class type7 {
private:
    double B;
public:
    type7(double b1) {
        B = b1;
    }
    void Get_answer() {
        cout << "������ ���������: x = 0" << endl;
    }
    void show() {
        cout << "��������� " << B << "*x = 0" << endl;
    }
};

class type8 {
private:
    double A, B;
public:
    type8(double a1, double b1) {
        A = a1;
        B = b1;
    }
    void Get_answer() {
        double x = ((-1) * B) / A;
        cout << "����� ���������: " << endl;
        cout << "X1 = 0" << endl << "X2 = " << x << endl;
    }
    void show() {
        cout << "��������� " << A << "*x^2 + " << B << "*x = 0 " << endl;
    }
    void Get_answer_podbor() {
        double min = abs(0 - A * (-20) * (-20) - B * (-20));
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            if (i != 0) {
                double temp = abs(0 - A * i * i - B * (i));
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
        }
        cout << "�����������, ���� �� ������ ���������: " << x << endl;
    }
};

int main()

{
    setlocale(LC_ALL, "Russian");
    double A, B, C;
    cout << "������� ������������ 1-�� ��������� A, B � C ����� ������: " << endl;
    cin >> A >> B >> C;
    type1 eq1;

    cout << "������� ������������ 2-�� ��������� A, B � C ����� ������: " << endl;
    cin >> A >> B >> C;
    type2 eq2(B);

    cout << "������� ������������ 3-�� ��������� A, B � C ����� ������: " << endl;
    cin >> A >> B >> C;
    type3 eq3(C);

    cout << "������� ������������ 4-�� ��������� A, B � C ����� ������: " << endl;
    cin >> A >> B >> C;
    type4 eq4(A, C);

    cout << "������� ������������ 5-�� ��������� A, B � C ����� ������: " << endl;
    cin >> A >> B >> C;
    type5 eq5(B, C);

    cout << "������� ������������ 6-�� ��������� A, B � C ����� ������: " << endl;
    cin >> A >> B >> C;
    type6 eq6(A, B, C);

    cout << "������� ������������ 7-�� ��������� A, B � C ����� ������: " << endl;
    cin >> A >> B >> C;
    type7 eq7(B);

    cout << "������� ������������ 8-�� ��������� A, B � C ����� ������: " << endl;
    cin >> A >> B >> C;
    type8 eq8(A, B);

    eq1.show();
    eq1.Get_answer();

    eq2.show();
    eq2.Get_answer();

    eq3.show();
    eq3.Get_answer();

    eq4.show();
    eq4.Get_answer();
    eq4.Get_answer_podbor();

    eq5.show();
    eq5.Get_answer();
    eq5.Get_answer_podbor();

    eq6.show();
    eq6.Get_answer();
    eq6.Get_answer_podbor();

    eq7.show();
    eq7.Get_answer();

    eq8.show();
    eq8.Get_answer();
    eq8.Get_answer_podbor();
    return 0;
}