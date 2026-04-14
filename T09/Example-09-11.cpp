#include <iostream>
#include <fstream>

// Визначаємо структуру
struct Player {
    int id;
    double health;
    int ammo;
};

int main() {
    Player p1 = {101, 85.5, 300};

    // Записуємо всю структуру (id, health і ammo) ОДНИМ шматком пам'яті
    std::ofstream out("savegame.dat", std::ios::binary);
    if (out.is_open()) {
        out.write(reinterpret_cast<char *>(&p1), sizeof(Player));
        out.close();
    }

    // Зчитуємо структуру з файлу
    Player loadedPlayer;
    std::ifstream in("savegame.dat", std::ios::binary);
    if (in.is_open()) {
        in.read(reinterpret_cast<char *>(&loadedPlayer), sizeof(Player));
        in.close();

        std::cout << "Завантажено гравця ID: " << loadedPlayer.id
                  << ", HP: " << loadedPlayer.health << "\n";
    }

    return 0;
}

// НЕПРАВИЛЬНО для бінарних файлів:
struct BadRecord {
    int id;
    std::string name; // Це вказівник на купу (heap)! Запишеться "сміття".
};

// ПРАВИЛЬНО для бінарних файлів:
struct GoodRecord {
    int id;
    char name[50]; // Текст зберігається безпосередньо всередині структури (максимум 49 символів + \0)
};
