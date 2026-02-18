#include "iostream"
#include "string"

using namespace std;

int main() {
    string file = "document.archive.tar.gz";

    size_t lastDot = file.rfind('.'); // Знайде крапку перед "gz"

    if (lastDot != string::npos) {
        cout << "Розширення: " << file.substr(lastDot); // ".gz"
    }
    return 0;
}