// Одночасне створення структури та її синоніму Point
typedef struct {
    int x;
    int y;
} Point;

int main() {
    Point p1; // Тепер можна писати просто Point, без слова struct
    p1.x = 10;
    return 0;
}
