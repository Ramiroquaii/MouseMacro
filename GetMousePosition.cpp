#include <windows.h>
#include <iostream>

int main() {
    POINT cursorPos;
    if (GetCursorPos(&cursorPos)) {
        int x = cursorPos.x;
        int y = cursorPos.y;
        std::cout << "Posici�n del mouse: (" << x << ", " << y << ")" << std::endl;
    }

    return 0;
}
