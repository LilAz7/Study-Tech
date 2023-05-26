
#include <cmath>
#include <locale>
#include <iostream>
using namespace std;
class type_1 {// A, B, C == 0
private:
	double A, B, C;
public:
	type_1(double a, double b, double c) {
		A = a;
		B = b;
		C = c;
	}
	void type_1_get_answer() {
		cout << "��������� ����� ��� ����� x" << endl;
	}
	void type_1_show() {
		cout << "(" << A << ")" << " * x^2 + " << "(" << B << ")" << " * x + " << "(" << C << ")" << endl << "0 = 0" << endl;
	}
};
class type_2 {//��� ������������ ����� A ����� 0
private:
	double A, B, C;
public:
	type_2(double a, double b, double c) {
		A = a;
		B = b;
		C = c;
	}
	void type_2_get_answer() {
		cout << "��������� ����� ������ ��� x = 0" << endl;
	}
	void type_2_show() {
		cout << "(" << A << ")" << " * x^2 + " << "(" << B << ")" << " * x + " << "(" << C << ")" << endl << "(" << A << ")" << " * x^2 = 0" << endl;
	}
};
class type_3 {//��� ������������ ����� C ����� 0
private:
	double A, B, C;
public:
	type_3(double a, double b, double c) {
		A = a;
		B = b;
		C = c;
	}
	void type_3_get_answer() {
		cout << "��������� �� ����� ������" << endl;
	}
	void type_3_show() {
		cout << "(" << A << ")" << " * x^2 + " << "(" << B << ")" << " * x + " << "(" << C << ")" << endl << "(" << C << ")" << " = 0 " << endl;
	}
};
class type_4 {// B = 0
private:
	double A, B, C;
public:
	type_4(double a, double b, double c) {
		A = a;
		B = b;
		C = c;
	}
	void type_4_get_answer() {
		double x = (-1 * C) / A;
		if (x >= 0) {
			double x1 = sqrt(x);
			double x2 = sqrt(x) * (-1);
			cout << "��������� ����� 2 �����" << endl << "������ ������ = " << x1 << endl << "������ ������ = " << x2 << endl;
		}
		else {
			cout << "������ ���" << endl;
		}
	}
	void type_4_get_answer_podbor() {
		if (((-1 * C) / A) >= 0) {
			double x;
			double min = abs(0 - A * (-20) * (-20) - C);
			for (double i = -20; i < 20.01; i += 0.01) {
				double temp = abs(0 - A * (i) * (i)-C);
				if (temp < min) {
					min = temp;
					x = i;
				}
			}
			cout << "�����������, ������ �� ������ ���������: " << x << " ������ �� ������ ���������: " << -1 * x << endl;
		}

	}
	void type_4_show() {
		cout << "(" << A << ")" << " * x^2 + " << "(" << B << ")" << " * x + " << "(" << C << ")" << endl << "(" << A << ")" << " * x^2 + " << "(" << C << ")" << " = 0" << endl;
	}
};
class type_5 {// A = 0
private:
	double A, B, C;
public:
	type_5(double a, double b, double c) {
		A = a;
		B = b;
		C = c;
	}
	void type_5_get_answer() {
		double x = (-1 * C) / B;
		cout << "��������� ����� ������������ ������ x = " << x << endl;
	}
	void type_5_get_answer_podbor() {
		double min = abs(0 - B * (-20) - C);
		double x = -20;
		for (double i = -20; i < 20.01; i = i + 0.01) {
			double temp = abs(0 - B * (i)-C);
			if (temp < min) {
				min = temp;
				x = i;
			}
		}
		cout << "�����������, ������������ �� ������ ���������: " << x << endl;
	}
	void type_5_show() {
		cout << "(" << A << ")" << " * x^2 + " << "(" << B << ")" << " * x + " << "(" << C << ")" << endl << "(" << B << ")" << " * x + " << "(" << C << ")" << " = 0" << endl;
	}
};
class type_6 {// ��� ����������� �� ����� 0
private:
	double A, B, C;
public:
	type_6(double a, double b, double c) {
		A = a;
		B = b;
		C = c;
	}
	void type_6_get_answer() {
		double D = pow(B, 2) - 4 * A * C;
		if (D > 0) {
			double x1, x2;
			x1 = ((-1 * B) + sqrt(D)) / (2 * A);
			x2 = ((-1 * B) - sqrt(D)) / (2 * A);
			cout << "��������� ����� 2 �����" << endl << "������ ������ = " << x1 << endl << "������ ������ = " << x2 << endl;
		}
		else if (D == 0) {
			double x;
			x = ((-1 * B) / (2 * A));
			cout << "��������� ����� ������������ ������ x = " << x << endl;
		}
		else {
			cout << "������������ ������ 0, ������ ���" << endl;
		}
	}
	void type_6_get_answer_podbor() {
		if (B * B - 4 * A * C >= 0) {
			double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
			double x = -20;
			for (double i = -20; i < 20.01; i = i + 0.01) {
				double temp = abs(0 - A * (i) * (i)-B * i - C);
				if (temp < min) {
					min = temp;
					x = i;
				}
			}
			if (B * B - 4 * A * C > 0) {
				cout << "�����������, ���� �� ������ ���������: " << x << endl;
			}
			else if (B * B - 4 * A * C == 0) {
				cout << "��������� ����� ������������ ������ x = " << x << endl;
			}
		}
	}
	void type_6_show() {
		cout << "(" << A << ")" << " * x^2 + " << "(" << B << ")" << " * x + " << "(" << C << ")" << " = 0 " << endl;
	}
};
class type_7 {//��� ������������ ����� B ����� 0
private:
	double A, B, C;
public:
	type_7(double a, double b, double c) {
		A = a;
		B = b;
		C = c;
	}
	void type_7_get_answer() {
		cout << "��������� ����� ������ ��� x = 0" << endl;
	}
	void type_7_show() {
		cout << "(" << A << ")" << " * x^2 + " << "(" << B << ")" << " * x + " << "(" << C << ")" << endl << "(" << B << ")" << " * x = 0 " << endl;
	}
};
class type_8 {//C = 0
private:
	double A, B, C;
public:
	type_8(double a, double b, double c) {
		A = a;
		B = b;
		C = c;
	}
	void type_8_get_answer() {
		double x1, x2;
		x1 = 0;
		x2 = (-1 * B) / A;
		cout << "��������� ����� 2 �����" << endl << "������ ������ = " << x1 << endl << "������ ������ = " << x2 << endl;
	}
	void type_8_get_answer_podbor() {
		double min = abs(0 - A * (-20) * (-20) - B * (-20));
		double x = -20;
		for (double i = -20; i < 20.01; i = i + 0.01) {
			if (i != 0) {
				double temp = abs(0 - A * (i) * (i)-B * (i));
				if (temp < min) {
					min = temp;
					x = i;
				}
			}
		}
		cout << "�����������, ������ �� ������ ���������: " << x << " ������ �� ������ ���������: 0" << endl;
	}
	void type_8_show() {
		cout << "(" << A << ")" << " * x^2 + " << "(" << B << ")" << " * x + " << "(" << C << ")" << endl << "(" << A << ")" << " * x^2 + " << "(" << B << ")" << " * x = 0 " << endl;
	}
};
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� ���������� ���������";
	cin >> n;
	for (int i=1; i < n + 1; i++) {
		cout << "������� ������������ ��� " << i << " - ��� ���������" << endl;
		double a, b, c;
		cin >> a >> b >> c;
		if (a != 0 && b != 0 && c != 0) {
			type_6 eq2(a, b, c);
			eq2.type_6_show();
			eq2.type_6_get_answer();
			eq2.type_6_get_answer_podbor();
		}
		else if (a == 0 && b == 0 && c == 0) {
			type_1 eq2(a, b, c);
			eq2.type_1_show();
			eq2.type_1_get_answer();
		}
		else if (a != 0 && b == 0 && c == 0) {
			type_2 eq2(a, b, c);
			eq2.type_2_show();
			eq2.type_2_get_answer();
		}
		else if (a == 0 && b != 0 && c == 0) {
			type_7 eq2(a, b, c);
			eq2.type_7_show();
			eq2.type_7_get_answer();
		}
		else if (a == 0 && b == 0 && c != 0) {
			type_3 eq2(a, b, c);
			eq2.type_3_show();
			eq2.type_3_get_answer();
		}
		else if (a != 0 && b != 0 && c == 0) {
			type_8 eq2(a, b, c);
			eq2.type_8_show();
			eq2.type_8_get_answer();
			eq2.type_8_get_answer_podbor();
		}
		else if (a != 0 && b == 0 && c != 0) {
			type_4 eq2(a, b, c);
			eq2.type_4_show();
			eq2.type_4_get_answer();
			eq2.type_4_get_answer_podbor();
		}
		else if (a == 0 && b != 0 && c != 0) {
			type_5 eq2(a, b, c);
			eq2.type_5_show();
			eq2.type_5_get_answer();
			eq2.type_5_get_answer_podbor();
		}
	}
	return 0;
}