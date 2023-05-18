#include <windows.h>
#include <shellapi.h>

int main() {
    LPCSTR programPath = "C:\\Ruta\\del\\programa.exe"; // Reemplaza con la ruta real del programa que deseas lanzar

    HINSTANCE hInstance = ShellExecute(NULL, "open", programPath, NULL, NULL, SW_SHOW);

    if ((intptr_t)hInstance <= 32) {
        // Ocurrió un error al lanzar el programa
        // Realiza las acciones correspondientes
    }

    return 0;
}
