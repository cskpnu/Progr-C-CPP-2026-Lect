// Файл: database.cpp

// Цю змінну видно ТІЛЬКИ всередині файлу database.cpp
static int connectionLimit = 5;

// Цю функцію теж неможливо викликати з інших файлів!
static void connectToDB() {
    // Логіка підключення
}
