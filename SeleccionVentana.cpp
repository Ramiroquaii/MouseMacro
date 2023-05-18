#include <windows.h>

int main() {
    HWND windowHandle = FindWindow(NULL, "Título de la ventana"); // Reemplaza "Título de la ventana" con el título real de la ventana que deseas seleccionar

    if (windowHandle != NULL) {
        SetForegroundWindow(windowHandle);
    }

    return 0;
}
