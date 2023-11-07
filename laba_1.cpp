#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int number1, number2, answer, correctAnswer;
    cout << "Введите первое число";
    cin >> number1;

    cout << "Введите второе число";
    cin >> number2;

    correctAnswer = number1 * number2;

    cout << "Сколько будет" << number1 << "умножить на" << number2 << "?";
    cin >> answer;

    if (answer == correctAnswer) {
        cout << "Правильно!" << endl;
    
    }
    else {

        cout << "Неправильно. Правильный ответ: " << correctAnswer << endl;
    }
    return 0;
}                                       


