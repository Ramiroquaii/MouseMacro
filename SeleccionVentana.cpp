#include <windows.h>

int main() {
    HWND windowHandle = FindWindow(NULL, "T�tulo de la ventana"); // Reemplaza "T�tulo de la ventana" con el t�tulo real de la ventana que deseas seleccionar

    if (windowHandle != NULL) {
        SetForegroundWindow(windowHandle);
    }

    return 0;
}
