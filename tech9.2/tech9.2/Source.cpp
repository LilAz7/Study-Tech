
#include <iostream>
#include <string>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int intArr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };
    int intSize = sizeof(intArr) / sizeof(int);
    sortArray(intArr, intSize);
    for (int i = 0; i < intSize; i++) {
        cout << intArr[i] << " ";
    }
    cout << endl;

    double doubleArr[] = { 3.14, 1.41, 2.71, 0.98, 0.62 };
    int doubleSize = sizeof(doubleArr) / sizeof(double);
    sortArray(doubleArr, doubleSize);
    for (int i = 0; i < doubleSize; i++) {
        cout << doubleArr[i] << " ";
    }
    cout << endl;

    string strArr[] = { "John Doe", "Jane Doe", "Alice Smith", "Bob Smith" };
    int strSize = sizeof(strArr) / sizeof(string);
    sortArray(strArr, strSize);
    for (int i = 0; i < strSize; i++) {
        cout << strArr[i] << " ";
    }
    cout << endl;

    return 0;
}