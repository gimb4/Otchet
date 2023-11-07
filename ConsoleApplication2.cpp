#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sum = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }

    std::cout << "Сумма нечетных чисел: " << sum << std::endl;

    return 0;
}
