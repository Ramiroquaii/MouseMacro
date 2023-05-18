#include <windows.h>

bool IsProgramRunning(const char* windowTitle) {
    HWND windowHandle = FindWindow(NULL, windowTitle);
    return (windowHandle != NULL);
}

int main() {
    const char* programTitle = "Título del programa"; // Reemplaza con el título real del programa que deseas verificar

    if (IsProgramRunning(programTitle)) {
        // El programa ya está en ejecución
        // Realiza las acciones correspondientes
    } else {
        // El programa no está en ejecución, puedes lanzarlo aquí
        // Realiza las acciones correspondientes
    }

    return 0;
}

