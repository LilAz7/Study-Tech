#include "rational.h";
#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "¬ведите количество дробей" << endl;
    cin >> n;
    rational* arr = new rational[n];
    for (int i = 0; i < n; i++) {
        cout << "¬ведите числитель и знаменатель дроби" << endl;
        int a1, b1;
        cin >> a1 >> b1;
        arr[i] = rational(a1, b1);
        arr[i].show();

    }
}