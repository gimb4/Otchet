#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");
        using namespace std;
    string schedule[7] = {
        "Понедельник: Математика",
        "Вторник: Физика",
        "Среда: Химия",
        "Четверг: История",
        "Пятница: Литература",
        "Суббота: Английский",
        "Воскресенье: Отдых"
    };
 
    cout << "Введите день недели (от 1 до 7): ";
    int day;
    cin >> day;

    if (day >= 1 && day <= 7) {
        cout << "Ваше расписание на этот день: " << schedule[day - 1] << endl;
    }
    else {
        cout << "Некорректный день недели. Пожалуйста, введите число от 1 до 7." << endl;
    }

    return 0;
}
