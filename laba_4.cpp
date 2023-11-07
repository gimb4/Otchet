#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

bool isPasswordValid(const std::string& password) {
    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasSpecialChar = false;

    for (char c : password) {
        if (isupper(c)) {
            hasUpperCase = true;
        }
        else if (islower(c)) {
            hasLowerCase = true;
        }
        else if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '^' || c == '&' || c == '*' || c == '+' || c == '?') {
            hasSpecialChar = true;
        }
    }

    return hasUpperCase && hasLowerCase && hasSpecialChar;
}

std::string generatePassword(int length) {
    std::string password;
    std::string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*+?";

    srand(time(0));

    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % characters.length();
        password += characters[randomIndex];
    }

    return password;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int passwordLength;
    std::cout << "Введите длину пароля: ";
    std::cin >> passwordLength;

    std::string password = generatePassword(passwordLength);
    std::cout << "Сгенерированный пароль: " << password << std::endl;

    if (isPasswordValid(password)) {
        std::cout << "Пароль действителен." << std::endl;
    }
    else {
        std::cout << "Пароль недействителен." << std::endl;
    }

    return 0;
}