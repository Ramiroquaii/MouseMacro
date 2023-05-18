#include <windows.h>

bool IsProgramRunning(const char* windowTitle) {
    HWND windowHandle = FindWindow(NULL, windowTitle);
    return (windowHandle != NULL);
}

int main() {
    const char* programTitle = "T�tulo del programa"; // Reemplaza con el t�tulo real del programa que deseas verificar

    if (IsProgramRunning(programTitle)) {
        // El programa ya est� en ejecuci�n
        // Realiza las acciones correspondientes
    } else {
        // El programa no est� en ejecuci�n, puedes lanzarlo aqu�
        // Realiza las acciones correspondientes
    }

    return 0;
}

