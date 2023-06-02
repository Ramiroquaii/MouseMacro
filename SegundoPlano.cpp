#include <Windows.h>
#include <stdio.h>

int main() {
    //const char* script = "C:\\Users\\ramiro.vechiola\\Desktop\\Mouse Macro C\\MouseMacro\\VerificaryEjecutar.exe";
    const char* script = "C:\\Users\\ramiro.vechiola\\Desktop\\Mouse Macro C\\MouseMacro\\ivms4200.exe"; 

    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(STARTUPINFO));
    si.cb = sizeof(STARTUPINFO);
    ZeroMemory(&pi, sizeof(PROCESS_INFORMATION));

    BOOL success = CreateProcess(NULL, (LPSTR)script, NULL, NULL, FALSE, CREATE_NO_WINDOW, NULL, NULL, &si, &pi);

    if (success) {
        printf("El script se ejecutó correctamente en segundo plano.\n");
    } else {
        printf("No se pudo ejecutar el script.\n");
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return 0;
}

