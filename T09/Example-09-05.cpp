#include <iostream>
#include <fstream>
#include <string>

void writeToLog(const std::string& message) {
    // Відкриваємо файл у режимі ДОДАВАННЯ (app)
    std::ofstream logFile("history.log", std::ios::app);

    if (!logFile.is_open()) {
        std::cerr << "Помилка доступу до файлу логів!\n";
        return;
    }

    // Записуємо повідомлення. Воно гарантовано опиниться в самому кінці.
    logFile << "[ПОДІЯ]: " << message << "\n";

    logFile.close(); // не обов'язково, деструктор зробить це за нас
}

int main() {
    writeToLog("Програму запущено.");
    writeToLog("Користувач увійшов у систему.");
    writeToLog("Програму штатно завершено.");

    std::cout << "Події записано в history.log\n";
    return 0;
}